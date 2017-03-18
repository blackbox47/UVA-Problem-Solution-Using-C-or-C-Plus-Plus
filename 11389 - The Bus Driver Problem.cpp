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

#define mx 105

int morning[mx],evening[mx],total[mx];

bool com(int x,int y)
{
    if(x>y) return 1;
    else return 0;
}

int main(void)
{
    int i,j,driver,hour,rate,test,qq;
    while(scanf("%d %d %d", &driver,&hour,&rate)==3)
    {
        if(driver==0 && hour==0 && rate==0) break;
        for(i=0;i<driver;i++) scanf("%d", &morning[i]);
        for(i=0;i<driver;i++) scanf("%d", &evening[i]);

        sort(&morning[0],&morning[0]+driver);
        sort(&evening[0],&evening[0]+driver,com);
        int sum=0;
        for(i=0;i<driver;i++)
        {
            total[i]=morning[i]+evening[i];
            if(total[i]>hour) sum+=total[i]-hour;
        }
        printf("%d\n", sum*rate);

        memset(total,0,sizeof(total));
        memset(morning,0,sizeof(morning));
        memset(evening,0,sizeof(evening));
    }
    return 0;
}

