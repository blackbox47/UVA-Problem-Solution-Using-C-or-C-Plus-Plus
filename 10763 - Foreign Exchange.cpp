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

map<int,int>m;
map<int,int>:: iterator it;

int main(void)
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int i,j,n,x,y;
    while(scanf("%d", &n)==1)
    {
        if(n==0) break;
        for(i=0;i<n;i++)
        {
            scanf("%d %d", &x,&y);
            m[x]++; m[y]++;
        }
        int flag=0,a;
        for(it=m.begin();it!=m.end();it++)
        {
            a=it->second;
            if(a%2==1)
            {
                flag=1;
                break;
            }
        }
        if(flag==1) printf("NO\n");
        else printf("YES\n");

        m.clear();
    }

    return 0;
}

