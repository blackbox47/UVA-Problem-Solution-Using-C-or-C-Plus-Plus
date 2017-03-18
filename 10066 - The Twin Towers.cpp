#include<stdio.h>
#include<algorithm>
#include<string.h>
#define mx 120

using namespace std;

int a[mx],b[mx],m,n,dp[mx][mx];

int lcs(int x,int y);

int main(void)
{
    int i,j,ans,qq;
    qq=1;
    while(scanf("%d %d", &m,&n)==2)
    {
        if(m==0 && n==0) break;
        for(i=0;i<m;i++) scanf("%d", &a[i]);
        for(i=0;i<n;i++) scanf("%d", &b[i]);

        memset(dp,-1,sizeof(dp));
        ans=lcs(m-1,n-1);
        printf("Twin Towers #%d\n", qq);
        printf("Number of Tiles : %d\n\n", ans);

        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        qq++;
    }

    return 0;
}

int lcs(int x,int y)
{
    int maxv=0;
    if(x<0 || y<0) return 0;
    if(dp[x][y]!=-1) return dp[x][y];

    if(a[x]==b[y])
    {
        maxv=max(maxv,lcs(x-1,y-1)+1);
    }
    else
    {
        maxv=max(maxv,lcs(x,y-1) );
        maxv=max(maxv,lcs(x-1,y) );
    }

    dp[x][y]=maxv;

    return dp[x][y];
}
