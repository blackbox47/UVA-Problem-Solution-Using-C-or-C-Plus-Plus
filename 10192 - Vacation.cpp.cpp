#include<stdio.h>
#include<string.h>
#include<algorithm>
#define mx 120

using namespace std;

int lcs(int x,int y);

int dp[mx][mx];
char a[mx],b[mx];

int main(void)
{
    int len,len1,ans,qq;
    qq=1;
    while(gets(a))
    {
        if(strcmp(a,"#")==0) break;
        gets(b);
        len=strlen(a); len1=strlen(b);

        memset(dp,-1,sizeof(dp));
        ans=lcs(len-1,len1-1);
        printf("Case #%d: you can visit at most %d cities.\n", qq,ans);

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
        maxv=max(maxv,(lcs(x-1,y-1)+1));
    }
    else
    {
        maxv=max( maxv, lcs(x,y-1) );
        maxv=max( maxv, lcs(x-1,y) );
    }

    dp[x][y]=maxv;

    return dp[x][y];
}
