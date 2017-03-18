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
//v.erase(unique(v.begin(),v.end()),v.end());
//map<string,int>m;
//map<string,int>:: iterator it;
// reverse(aa.begin(),aa.end()); /// for string

///int rr[]= {-1,-1,0,0,1,1};
///int cc[]= {-1,0,-1,1,0,1};
///int rr[]= {0,0,1,-1};/*4 side move*/
///int cc[]= {-1,1,0,0};/*4 side move*/
///int rr[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
///int cc[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
///int rr[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
///int cc[]={2,-2,1,-1,2,-2,1,-1};/*night move*/

#define mx 100

vector< pair<int,pair<int,int> > >v;
map<int,int>m;

int main(void)
{
    int i,j,k,var,fff;

    for(i=0;i<=mx;i++)
    {
        for(j=i+1;j<=mx;j++)
        {
            var=(j*j*j)-(i*i*i);
            if(m[var]==0)
            {
                m[var]=1;
                v.pb( mp(var,mp(j,i)) );
            }
        }
    }
    sort(v.begin(),v.end());

    int n,x,y,minv,maxv,flag;
    while(scanf("%d", &n)==1)
    {
        if(n==0) break;
        flag=0;
        for(i=0;i<(int)v.size();i++)
        {
            if(v[i].first==n)
            {
                x=v[i].second.first;
                y=v[i].second.second;
                minv=min(x,y);
                if(minv==x) maxv=y;
                else maxv=x;
                printf("%d %d\n", maxv,minv);
                flag=1;
                break;
            }
        }
        if(flag==0) printf("No solution\n");
    }

    return 0;
}

