#include<stdio.h>
#include<string.h>
#include<string>
#include<queue>
#include<vector>

using namespace std;

#define MAX 1010
#define oo (1<<25)

int MAX_ROW,MAX_COL;
int arr[MAX][MAX];
int dist[MAX][MAX];

struct vertice
{
    int x,y,cost;

    bool operator<(const vertice & x)const
    {
        return cost>x.cost;
    }
    vertice(int a, int b, int c)
    {
        x=a;y=b;cost=c;
    }
} ;

void Dijkstra(int x,int y);

int main(void)
{
    int test,qq;
    scanf("%d", &test);
    for(int i=1;i<=test;i++)
    {
        scanf("%d %d", &MAX_ROW,&MAX_COL);
        for(int i=0;i<MAX_ROW;i++) for(int j=0;j<MAX_COL;j++) scanf("%d", &arr[i][j]);
        for(int i=0;i<MAX_ROW;i++) for(int j=0;j<MAX_COL;j++) dist[i][j]=oo;

        Dijkstra(0,0);
        printf("%d\n", dist[MAX_ROW-1][MAX_COL-1]);

        memset(dist,0,sizeof(dist));
    }

    return 0;
}

void Dijkstra(int x,int y)
{
    int row,col,a,b,cost;
    priority_queue<vertice>Q;
    int rr[]={1,0,-1,0};
    int cc[]={0,1,0,-1};

    Q.push(vertice(x,y,arr[x][y]));
    dist[x][y]=arr[x][y];

    while(!Q.empty())
    {
        row=Q.top().x; col=Q.top().y; cost=Q.top().cost;
        Q.pop();
        for(int i=0;i<4;i++)
        {
            a=row+rr[i]; b=col+cc[i];
            if(a>=0 && b>=0 && a<MAX_ROW && b<MAX_COL)
            {
                if(dist[a][b]>dist[row][col]+arr[a][b])
                {
                    dist[a][b]=dist[row][col]+arr[a][b];
                    Q.push(vertice(a,b,dist[a][b]));
                }
            }
        }
    }

    return ;
}
