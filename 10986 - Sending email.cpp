#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

#define max 20010
#define oo (1<<25)

struct pq
{
    int node,cost;
    pq(int _node=0 ,int _cost=0)
    {
        node=_node;
        cost=_cost;
    }
    bool operator<(const pq & b)const
    {
        return cost>b.cost;
    }
};

vector<pq>adj[max];
int color[max],dist[max];


void Dijkstra(int source,int node)
{
    int i,j,v,u,cost;
    priority_queue<pq>Q;

    for(i=0;i<node;i++) dist[i]=oo;

    Q.push(pq(source,0));

    dist[source]=0;

    while(!Q.empty())
    {
        u=Q.top().node;
        Q.pop();
        if(color[u]==0)
        {
            color[u]=1;
            for(i=0;i<(int)adj[u].size();i++)
            {
                v=adj[u][i].node;
                cost=adj[u][i].cost;
                if(dist[u]+cost<dist[v])
                {
                    dist[v]=dist[u]+cost;
                    Q.push(pq(v,dist[v]));
                }
            }
        }
    }

    return ;
}

int main(void)
{
    int nodes,edges,source,end,i,j,u,v,cost,test,qq;
    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        scanf("%d %d %d %d", &nodes,&edges,&source,&end);

        for(i=0;i<edges;i++)
        {
            scanf("%d %d %d", &u,&v,&cost);
            adj[u].push_back(pq(v,cost));
            adj[v].push_back(pq(u,cost));
        }

        Dijkstra(source,nodes);

        if(dist[end]<oo) printf("Case #%d: %d\n", qq,dist[end]);
        else printf("Case #%d: unreachable\n", qq);

        memset(color,0,sizeof(color));
        memset(dist,0,sizeof(dist));
        for(i=0;i<nodes;i++) adj[i].clear();
    }

    return 0;
}
