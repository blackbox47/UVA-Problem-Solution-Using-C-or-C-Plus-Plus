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
#define EPS 1e-9


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

int p,q,r,s,t,u;

double f(double x)
{
    return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
}

double bisection(void)
{
    double high,low,mid;
    high=1; low=0;
    mid=(high+low)/2;
    while(low+EPS<=high)
    {
        mid=(high+low)/2;
        if(f(low)*f(mid)<=0) high=mid;
        else low=mid;
    }

    return mid;
}

int main(void)
{
    int i,j;
    while(scanf("%d %d %d %d %d %d", &p,&q,&r,&s,&t,&u)==6)
    {
        if(f(0)*f(1)>0)
        {
            printf("No solution\n");
        }
        else
        {
            printf("%.4lf\n", bisection());
        }
    }

    return 0;
}

