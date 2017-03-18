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

string aa;
char str[1000];
struct pq
{
    string a;
    int cnt;
    int indx;
    pq(string _a,int _cnt,int _indx)
    {
        a=_a;
        cnt=_cnt;
        indx=_indx;
    }
};
vector< pq >v;

bool com(pq a,pq b)
{
    if(a.cnt==b.cnt)
    {
        if(a.indx<b.indx) return 1;
        else return 0;
    }
    else
    {
        if(a.cnt<b.cnt) return 1;
        else return 0;
    }
}

int myfun(string a)
{
    int i,j,sz,sum;
    char c;
    sz=a.size();
    sum=0;
    for(i=0;i<sz;i++)
    {
        c=a[i];
        for(j=i;j<sz;j++)
        {
            if(c>a[j]) sum++;
        }
    }

    return sum;
}


int main(void)
{
    int i,j,a,n,test,qq;
    char c;
    scanf("%d", &test);
    bool blank = false;
    for(qq=1;qq<=test;qq++)
    {
        scanf("%d %d", &a,&n);
        for(i=0;i<n;i++)
        {
            cin>>aa;
            int ans=myfun(aa);
            v.pb( pq(aa,ans,i)  );
            aa.clear();
        }
        sort(v.begin(),v.end(),com);


        if ( blank ) printf ("\n");
        blank = true;
        for(i=0;i<(int)v.size();i++)
        {
            cout<<v[i].a<<endl;
        }

        v.clear();
        aa.clear();
    }

    return 0;
}

