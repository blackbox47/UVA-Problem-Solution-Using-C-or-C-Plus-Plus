#include<stdio.h>
#include<vector>
#include<algorithm>
#include<string.h>
#include<queue>

using namespace std;

#define mx 30050

vector<int>adj[mx];
int color[mx],cnt;

void bfs(int source);

int main(void)
{
    int node,edge,i,j,u,v,test,qq;
    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        scanf("%d %d", &node,&edge);

        for(i=1;i<=edge;i++)
        {
            scanf("%d %d", &u,&v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int maxv=0;
        for(i=1;i<=node;i++)
        {
            if(color[i]==0)
            {
                bfs(i);
                if(maxv<cnt) maxv=cnt;
                cnt=0;
            }
        }
        printf("%d\n", maxv);

        memset(color,0,sizeof(color));
        for(i=0;i<=node;i++) adj[i].clear();
    }

    return 0;
}

void bfs(int source)
{
    int i,j;
    queue<int>q;
    q.push(source);
    color[source]=1; cnt++;

    while(!q.empty())
    {
        source=q.front(); q.pop();

        for(i=0;i<(int)adj[source].size();i++)
        {
            if(color[adj[source][i]]==0)
            {
                q.push(adj[source][i]);
                cnt++;
                color[adj[source][i]]=1;
            }
        }
    }

    return ;
}
