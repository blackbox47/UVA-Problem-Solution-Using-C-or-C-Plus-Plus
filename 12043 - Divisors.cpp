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

#define mx 100010
#define SZ 100010

ll divisor[mx],sum_of_divisor[mx];

void pre(void);

int main(void)
{
    ll i,j,a,b,c,k,sum,cnt,test,qq;
    pre();
    scanf("%lld", &test);
    for(qq=1;qq<=test;qq++)
    {
        scanf("%lld %lld %lld", &a,&b,&k);
        sum=0,cnt=0;
        for(i=a;i<=b;i++)
        {
            if(i%k==0)
            {
                sum+=divisor[i];
                cnt+=sum_of_divisor[i];
            }
        }
        printf("%lld %lld\n", sum,cnt);
    }

    return 0;
}

void pre(void)
{
    ll i,j,sum,first;
    sum=0;
    for(i=1;i<=SZ;i++)
    {
        for(j=i;j<=SZ;j+=i)
        {
            sum_of_divisor[j]+=i;
            divisor[j]++;
        }
    }

    return ;
}
