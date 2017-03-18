#include<stdio.h>
#include<string.h>

long long rec(long long cur,long long howmany,long long sum);

long long N,M,D,Q,dp[210][210][210],arr[210];

int main(void)
{
//    freopen("TEXT.txt","w",stdout);
    long long i,j,ans,qq;
    qq=1;
    while(scanf("%lld %lld", &N,&Q)==2)
    {
        if(N==0 && Q==0) break;
        for(i=0;i<N;i++) scanf("%lld", &arr[i]);

        printf("SET %lld:\n", qq);
        for(i=1;i<=Q;i++)
        {
            scanf("%lld %lld", &D,&M);
            memset(dp,-1,sizeof(dp));
            ans=rec(0,0,0);
            printf("QUERY %lld: %lld\n", i,ans);
        }
        memset(arr,0,sizeof(arr));
        qq++;
    }

    return 0;
}

long long rec(long long cur,long long howmany,long long sum)
{
    if(howmany==M)
    {
        if(sum==0) return 1;
        else return 0;
    }
    if(cur==N)
    {
        return 0;
    }

    long long &ret=dp[cur][howmany][sum];
    if(ret!=-1) return ret;

    ret=0;
    ret+=rec(cur+1,howmany+1,( ( (sum+arr[cur])%D)+D)%D  );
    ret+=rec(cur+1,howmany,sum);

    return ret;
}
