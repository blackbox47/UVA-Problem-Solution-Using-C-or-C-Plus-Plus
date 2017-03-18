#include<stdio.h>
#include<string.h>

long long M;

long long rec(long long b,long long p);

int main(void)
{
    long long b,p,ans;

    while(scanf("%lld %lld %lld", &b,&p,&M)==3)
    {
        ans=rec(b,p);
        printf("%lld\n", ans);
    }

    return 0;
}

long long rec(long long b,long long p)
{
    long long tem;
    if(p==0) return 1;
    if(p%2==0)
    {
        tem=rec(b,p/2);
        tem=( (tem%M)*(tem%M))%M;
        return tem;
    }
    else return (b*rec(b,p-1))%M;
}
