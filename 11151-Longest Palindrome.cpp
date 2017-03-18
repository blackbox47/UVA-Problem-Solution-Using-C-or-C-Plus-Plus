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


// prime number upto 50 {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
//set<ll>s;
//set<ll>:: iterator it;
//v.erase(unique(v.begin(),v.end()),v.end());
//map<string,int>mymap;
//map<string,int>:: iterator it;
// reverse(aa.begin(),aa.end()); /// for string

/// string to int
//string a="10";
//ss<<a;
//int ans;
//ss>>ans;
//printf("%d\n", ans+20);
//

/// int to string
//int a=10;
//string aa;
//ss<<a;
//aa=ss.str();
//cout<<aa<<endl;



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
char aa[mx];

int rec(int x,int y);

int main(void)
{
    int i,j,ans,test,qq;
    scanf("%d", &test);
    char c;
    scanf("%c", &c);
    for(qq=1;qq<=test;qq++)
    {
        cin.getline(aa,mx);
        int sz=strlen(aa);
        memset(dp,-1,sizeof(dp));
        ans=rec(0,sz-1);
        printf("%d\n", sz-ans);
    }

    return 0;
}

int rec(int x,int y)
{
    if(x>y) return 0;
    if(x>y) return 0;
    int &ret=dp[x][y];
    if(ret!=-1) return ret;
    ret=oo;
    if(aa[x]==aa[y]) return ret=rec(x+1,y-1);
    else
    {
        ret=min(ret,rec(x+1,y)+1);
        ret=min(ret,rec(x,y-1)+1);
        ret=min(ret,rec(x+1,y-1)+2);

        return ret;
    }
}
