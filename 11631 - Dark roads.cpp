#include<stdio.h>
#include<string.h>
#include<string>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

#define mp make_pair
#define pb push_back
#define MAX 300000

//vector<pair<int,pair<int,int> > >v;
vector<pair<int,pair<int,int> > >v;
int rank[MAX],par[MAX];

void Make_set(int x);
int Find_parent(int x);
void Union_set(int x,int y);
void Link(int x,int y);
int MST(void);
int node;

int main(void)
{
    int edge,i,j,x,y,w,total_cost;

    while(scanf("%d %d", &node,&edge)==2)
    {
        if(node==0 && edge==0) break;
        total_cost=0;
        for(i=0;i<edge;i++)
        {
            scanf("%d %d %d", &x,&y,&w);
            total_cost+=w;
            v.pb(mp(w,mp(x,y)));
            v.pb(mp(w,mp(y,x)));
        }
        sort(v.begin(),v.end());
        int ans=MST();
        printf("%d\n", total_cost-ans);

        memset(rank,0,sizeof(rank)); memset(par,0,sizeof(par));
        v.clear();
    }

    return 0;
}

int MST(void)
{
    int i,j,x,y,cnt=0;
    for(i=0;i<node;i++) Make_set(i);

    for(i=0;i<(int)v.size();i++)
    {
        x=v[i].second.first;
        y=v[i].second.second;
        if(Find_parent(x)!=Find_parent(y))
        {
            Link(x,y);
            cnt+=v[i].first;
        }
    }

    return cnt;
}

void Make_set(int x)
{
    par[x]=x;
    rank[x]=0;
    return;
}

int Find_parent(int x)
{
    if(x!=par[x]) par[x]=Find_parent(par[x]);
    return par[x];
}

void Union_set(int x,int y)
{
    if(rank[x]>rank[y]) par[y]=x;
    else par[x]=y;

    if(rank[x]==rank[y]) rank[x]++;
    return;
}

void Link(int x,int y)
{
    Union_set(Find_parent(x),Find_parent(y));
    return;
}
