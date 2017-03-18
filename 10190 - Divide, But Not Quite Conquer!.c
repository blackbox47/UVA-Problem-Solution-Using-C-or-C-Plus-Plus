#include<stdio.h>

long long arr[1000000];
int main(void)
{
    long long int x,a,i,b,q,k,qq,flag,fff;
    while(scanf("%lld %lld", &a,&b)==2)
    {
        if(a==0 || a==1 || b==0 || b==1 || b>a)
        {
            printf("Boring!\n");
            continue;
        }
        x=a;
        k=0;
        for(i=0; ;i++)
        {
            q=x%b;
            arr[k]=x;
            k++;
            x=x/b;
            if(x<=0) break;
        }
        flag=1;
        for(k=0;k<i;k++)
        {
            qq=arr[k]%b;
            if(qq!=0)
            {
                flag=0;
            }
        }
        if(arr[i]!=1)
        {
            qq=arr[i]%b;
            if(qq!=0)
            {
                flag=0;
            }
        }
        fff=0;
        if(flag==0) printf("Boring!");
        else for(k=0;k<=i;k++)
        {
            printf("%lld", arr[k]);
            if(k==i) fff=1;
            if(fff==0) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
