#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
#include<map>
#include<queue>
#include<stack>
#include<iostream>
#include<string>
#include<math.h>
#include<set>

using namespace std;

#define pb(b) push_back(b);
#define oo (1<<29)
#define clear(name,val) memset(name,val,sizeof(name))
#define ll long long
#define mp(a,b) make_pair(a,b)


//set<ll>s;
//set<ll>:: iterator it;

///int rr[]= {-1,-1,0,0,1,1};
///int cc[]= {-1,0,-1,1,0,1};
///int rr[]= {0,0,1,-1};/*4 side move*/
///int cc[]= {-1,1,0,0};/*4 side move*/
///int rr[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
///int cc[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
///int rr[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
///int cc[]={2,-2,1,-1,2,-2,1,-1};/*night move*/


#define mx 1010

int dp[mx][mx];
string aa;
char bb[mx];

int long_palindrome(int x,int y);

int main(void)
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int i,j,sz,maxv,test,qq;
    char cc;
    scanf("%d", &test);
    scanf("%c", &cc);
    for(qq=1;qq<=test;qq++)
    {
        cin.getline(bb,mx);
        sz=strlen(bb);
        memset(dp,-1,sizeof(dp));
        int ans=long_palindrome(0,sz-1);
        printf("%d\n", ans);
    }

    return 0;
}

int long_palindrome(int x,int y)
{
    if(x==y) return 1;
    if(x>y) return 0;
    if(dp[x][y]!=-1) return dp[x][y];
    if(bb[x]==bb[y])
    {
        dp[x][y]=long_palindrome(x+1,y-1)+2;
    }
    else
    {
        dp[x][y]=max( long_palindrome(x+1,y),long_palindrome(x,y-1) );
    }

    return dp[x][y];
}
