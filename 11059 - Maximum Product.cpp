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

ll arr[25];

int main(void)
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    ll i,j,k,n,var,tem;
    ll qq=1;
    while(scanf("%lld", &n)==1)
    {
        for(i=0;i<n;i++) scanf("%lld", &arr[i]);

        ll maxv=0;
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                var=1;
                for(k=i;k<=j;k++)
                {
                    var*=arr[k];
                }
                maxv=max(maxv,var);
            }
        }
        printf("Case #%lld: The maximum product is %lld.\n\n", qq,maxv);
        qq++;
    }

    return 0;
}

