#include<stdio.h>

long long arr[10000000];
int main(void)
{
    long long int i,a,j,var,k,count,x;
    while(scanf("%lld", &x)==1)
    {
        if(x==0) break;
        a=x;
        j=0;
        k=0;
        for(i=2;i<=a/2;i++)
        {
            if(a%i==0)
            {
                var=i;
                arr[j]=var;
                a=a/i;
                i=1;
                j++;
                k++;
            }
        }
        arr[j]=a;
        count=0;
        for(j=0;j<=k;j++)
        {
            if(arr[j]!=arr[j+1])
            {
                count++;
            }
        }
        printf("%lld : %lld\n", x,count);
    }

    return 0;
}

