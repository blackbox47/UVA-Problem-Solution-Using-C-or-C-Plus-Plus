#include<stdio.h>
#include<string.h>

long long M;

long long rec(long long b,long long p);

int main(void)
{
    long long b,p,ans,test,qq;

    while(scanf("%lld", &test)==1)
    {
        if(test==0) break;
        for(qq=1;qq<=test;qq++)
        {
            scanf("%lld %lld %lld", &b,&p,&M);
            {
                ans=rec(b,p);
                printf("%lld\n", ans);
            }
        }
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

