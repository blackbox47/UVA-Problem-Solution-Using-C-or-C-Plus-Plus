#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<queue>

using namespace std;

#define oo (1<<25)
#define  mx 1010

struct pq
{
    int x,y,cost;
    pq(int a,int b,int c)
    {
        x=a; y=b; cost=c;
    }
    bool operator<(const pq&b)const
    {
        return cost>b.cost;
    }
};

int n,m,arr[mx][mx],dist[mx][mx];

void Dijkstra(int x,int y);

int main(void)
{
    int i,j,test,qq;
    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        scanf("%d %d", &n,&m);
        for(i=0;i<n;i++) for(j=0;j<m;j++) scanf("%d", &arr[i][j]);
        for(i=0;i<n;i++) for(j=0;j<m;j++) dist[i][j]=oo;

        Dijkstra(0,0);
        printf("%d\n", dist[n-1][m-1]);
    }

    return 0;
}

void Dijkstra(int x,int y)
{
    int i,j,row,col,a,b,cost;
    priority_queue<pq>q;
    int rr[]={1,0,-1,0};
    int cc[]={0,1,0,-1};
    q.push(pq(x,y,arr[x][y]));

    dist[x][y]=arr[x][y];

    while(!q.empty())
    {
        row=q.top().x; col=q.top().y; cost=q.top().cost;
        if(row==n-1 && col==m-1) return ;
        q.pop();
        for(i=0;i<4;i++)
        {
            a=row+rr[i]; b=col+cc[i];
            if(a>=0 && b>=0 && a<n && b<m)
            {
                if(dist[a][b]>dist[row][col]+arr[a][b])
                {
                    dist[a][b]=dist[row][col]+arr[a][b];
                    q.push(pq(a,b,dist[a][b]));
                }
            }
        }
    }

    return ;
}
