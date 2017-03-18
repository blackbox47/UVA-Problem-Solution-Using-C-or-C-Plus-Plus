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

string aa,bb;

int main(void)
{
    int i,j,k,sz,sz2,q,test,qq;
    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        cin>>aa;
        sz=aa.size();
        scanf("%d", &q);
        for(k=0;k<q;k++)
        {
            cin>>bb;
            sz2=bb.size();

            int flag=0;
            for(i=0;i<sz2;i++)
            {
                if(aa[i]!=bb[i])
                {
                    flag=1; break;
                }
            }
            if(flag==1) printf("n\n");
            else printf("y\n");
        }
    }

    return 0;
}


