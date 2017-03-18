#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<queue>

using namespace std;

#define mx 210
#define oo (1<<29)

vector<int>adj[mx];
int node,edge,color[mx],indegree[mx];

int bicoloring(int source);

int main(void)
{
    int i,j,x,y,source,test,qq,cnt;
    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        scanf("%d %d", &node,&edge);
        for(i=0;i<edge;i++)
        {
            scanf("%d %d", &x,&y);
            adj[x].push_back(y);
            adj[y].push_back(x);
            indegree[x]++; indegree[y]++;
        }

        cnt=0;
        for(i=0;i<node;i++)
        {
            if(indegree[i]==0) cnt++;
        }
        printf("");

        int flag=0,final_ans=0,ans;

        for(i=0;i<node;i++)
        {
            if(color[i]==0)
            {
                ans=bicoloring(i);
                if(ans==-2)
                {
                    flag=1; break;
                }
                final_ans+=ans;
            }
        }
        if(flag==0) printf("%d\n", final_ans+cnt);
        else printf("-1\n");

        for(i=0;i<node;i++) adj[i].clear();
        memset(color,0,sizeof(color));
        memset(indegree,0,sizeof(indegree));
    }

    return 0;
}

int bicoloring(int source)
{
    int i,j,u,v,flag;
    queue<int>q;

    q.push(source);
    color[source]=1;
    flag=0;
    while(!q.empty())
    {
        u=q.front(); q.pop();
        for(i=0;i<adj[u].size();i++)
        {
            if(color[u]==color[adj[u][i]])
            {
                flag=1;
                break;
            }
            else if(color[adj[u][i]]==0)
            {
                if(color[u]==1) color[adj[u][i] ]=2;
                else if(color[u]==2) color[adj[u][i] ]=1;
                q.push( adj[u][i] );
            }
        }
        if(flag==1) return -2;
    }
    int sum=0,count=0,minv;
    for(i=0;i<node;i++)
    {
        if(color[i]==1) sum++;
        else if(color[i]==2) count++;
    }
    minv=min(sum,count);

    for(i=0;i<node;i++)
    {
        if(color[i]!=0) color[i]=3;
    }

    return minv;
}


