#include<stdio.h>
#include<string.h>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

#define mx 120
#define oo (1<<25)

struct pq
{
    int node,cost;
    pq(int _node,int _cost)
    {
        node=_node;
        cost=_cost;
    }
    bool operator<(const pq&b)const
    {
        cost>b.cost;
    }
};

vector<pq>adj[mx];
int node,edge,query,dist[mx];

void Dijkstra(int source);

int main(void)
{
//    freopen("CONTEST.txt","w",stdout);
    int i,j,x,y,w,start,end,qq;
    qq=1;
    while(scanf("%d %d %d", &node,&edge,&query)==3)
    {
        if(node==0 && edge==0 && query==0) break;
        if(qq!=1) printf("\n");
        for(i=0;i<edge;i++)
        {
            scanf("%d %d %d", &x,&y,&w);
            adj[x].push_back(pq(y,w));
            adj[y].push_back(pq(x,w));
        }

        printf("Case #%d\n", qq);
        for(i=0;i<query;i++)
        {
            for(j=1;j<=node;j++) dist[j]=oo;
            scanf("%d %d", &start,&end);

            Dijkstra(start);

            if(dist[end]==oo) printf("no path\n");
            else printf("%d\n", dist[end]);
        }
        qq++;
        for(i=0;i<=node;i++) adj[i].clear();
    }

    return 0;
}

void Dijkstra(int source)
{
    int u,v,i,j,cost,w;
    priority_queue<pq>q;
    q.push(pq(source,0));
    dist[source]=0;

    while(!q.empty())
    {
        u=q.top().node;
        cost=q.top().cost;
        q.pop();

        for(i=0;i<(int)adj[u].size();i++)
        {
            v=adj[u][i].node;
            w=adj[u][i].cost;
            if(dist[v]>max(w,cost))
            {
                dist[v]=max(w,cost);
                q.push(pq(v,dist[v]));
            }
        }
    }

    return ;
}
