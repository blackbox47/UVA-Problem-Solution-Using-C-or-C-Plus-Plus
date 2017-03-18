#include<stdio.h>
#include<string.h>
#include<vector>
#include<string>
#include<iostream>

using namespace std;

#define oo (1<<25)
#define mx 1010

int rec(int x,int y);
string aa;
int dp[mx][mx];

int main(void)
{
    int i,j,sz,ans,test,qq;
    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        cin>>aa;
        sz=aa.size();

        memset(dp,-1,sizeof(dp));
        ans=rec(0,sz-1);
        printf("Case %d: %d\n", qq,ans);
    }

    return 0;
}

int rec(int x,int y)
{
    int minv=oo;;
    if(dp[x][y]!=-1) return dp[x][y];
    if(x>y) return 0;

    if(aa[x]==aa[y]) minv=min(minv,rec(x+1,y-1));
    else
    {
        minv=min(minv,rec(x,y-1)+1);
        minv=min(minv,rec(x+1,y)+1);
        minv=min(minv,rec(x+1,y-1)+1);
    }

    dp[x][y]=minv;

    return dp[x][y];
}

