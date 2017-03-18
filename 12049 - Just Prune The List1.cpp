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

#define mx 10010

int first[mx],second[mx];

int main(void)
{
    int i,j,n,m,cnt,sum,same,test,qq;
    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        scanf("%d %d", &n,&m);
        for(i=0;i<n;i++) scanf("%d", &first[i]);
        for(i=0;i<m;i++) scanf("%d", &second[i]);

        sort(&first[0],&first[0]+n);
        sort(&second[0],&second[0]+m);

        same=0; cnt=0; sum=0;
        while(cnt<n && sum<m)
        {
            if(first[cnt]==second[sum])
            {
                same++;
                cnt++;
                sum++;
            }
            else if(first[cnt]<second[sum]) cnt++;
            else sum++;
        }
        printf("%d\n", (n+m)-(2*same) );
    }

    return 0;
}

