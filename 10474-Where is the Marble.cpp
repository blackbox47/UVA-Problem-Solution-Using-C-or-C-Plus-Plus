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


vector<int>v;

int main(void)
{
    int i,j,n,q,tem,find,qq;
    qq=1;
    while(scanf("%d %d", &n,&q)==2)
    {
        if(n==0 && q==0) break;
        for(i=0;i<n;i++)
        {
            scanf("%d", &tem);
            v.pb(tem);
        }
        sort(v.begin(),v.end());

        int flag;
        printf("CASE# %d:\n", qq);
        for(i=0;i<q;i++)
        {
            scanf("%d", &find);
            flag=0;
            for(j=0;j<v.size();j++)
            {
                if(v[j]==find)
                {
                    printf("%d found at %d\n", find,j+1);
                    flag=1;
                    break;
                }
            }
            if(flag==0) printf("%d not found\n", find);
        }
        v.clear();
        qq++;
    }

    return 0;
}

