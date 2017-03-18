#include<stdio.h>

long long int binary(long long int p);
long long int str[1000],arr[1000];
int main(void)
{
    long long int a ,b,c,i,d,rec,s;
    while(scanf("%lld %lld %lld", &a,&b,&c)==3)
    {
        if (b==0) printf ("1\n");
        else
        {
            rec=binary(b);
            for(i=0;i<rec;i++)
            {
                if(i==0) s=a%c;
                else if(arr[i]==1)
                {
                    s=((s%c)*(s%c)*(a%c))%c;
                }
                else if(arr[i]==0)
                {
                    s=((s%c)*(s%c))%c;
                }
            }
            printf("%lld\n", s);
        }
    }

    return 0;
}

long long int binary(long long int p)
{
    long long int i,len,j,q,kl,k;
    j=0;
    kl=0;
    while(1)
    {
        q=p%2;
        str[j]=q;
        j++; kl++;
        p=p/2;
        if(p==0) break;
    }
    k=0;
    for(j=kl-1;j>=0;j--,k++)
    {
        arr[k]=str[j];
    }

    return kl;
}
