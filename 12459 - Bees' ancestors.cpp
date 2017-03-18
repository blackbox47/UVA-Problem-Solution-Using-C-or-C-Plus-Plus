#include<stdio.h>

long long arr[100];

void rec(void);

int main(void)
{
    long long n,i;
    rec();
    while(scanf("%lld", &n)==1)
    {
        if(n==0) break;
        else
        {
            printf("%lld\n", arr[n]);
        }
    }

    return 0;
}

void rec(void)
{
    long long i,j;
    arr[1]=1; arr[2]=2;

    for(i=3;i<=82;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }

    return ;
}
