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
#include <sstream>

using namespace std;

#define pb(b) push_back(b);
#define oo (1<<29)
#define ll long long
#define mp(a,b) make_pair(a,b)
#define PI  2.0*acos(0.0)



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

#define mx 120

string aa,bb,tem;

set<string>s;
set<string>:: iterator it;
int dp[mx][mx];

int palindrome(int x,int y);

int main(void)
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int i,j,sz;
    while(cin>>aa)
    {
        tem=aa;
        sz=aa.size();

        for(i=0;i<sz;i++)
        {
            for(j=1;j<=sz;j++)
            {
                if(i+j>sz) break;
                bb=aa.substr(i,j);
                s.insert(bb);
            }
        }
        int cnt=0;
        for(it=s.begin();it!=s.end();it++)
        {
            aa=*it;
            sz=aa.size();
            memset(dp,-1,sizeof(dp));
            if( palindrome(0,sz-1) ) cnt++;
        }
        printf("The string '");
        cout<<tem;
        printf("' contains %d palindromes.\n", cnt);

        s.clear();
        bb.clear();
        aa.clear();
    }

    return 0;
}

int palindrome(int x,int y)
{
    if(x>y) return 1;
    if(dp[x][y]!=-1) return dp[x][y];
    if(aa[x]==aa[y]) dp[x][y]=palindrome(x+1,y-1);
    else dp[x][y]=0;

    return dp[x][y];
}
