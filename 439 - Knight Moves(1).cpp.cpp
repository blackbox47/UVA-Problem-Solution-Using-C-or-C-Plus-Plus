#include<stdio.h>
#include<vector>
#include<string.h>
#include<string>
#include<queue>
#include<iostream>

using namespace std;

#define mx 100

int color[mx][mx],dist[mx][mx],srow,scol,erow,ecol;
char aa[20],bb[20];

struct pq
{
    int x,y;
    pq(int _x,int _y)
    {
        x=_x; y=_y;
    }
};

void bfs(int x,int y);

int main(void)
{
    int i,j;
    while(scanf("%s %s", &aa,&bb)==2)
    {
        srow=aa[0]-'a'+1; scol=aa[1]-'0';
        erow=bb[0]-'a'+1; ecol=bb[1]-'0';

        bfs(srow,scol);

        printf("To get from %s to %s takes %d knight moves.\n", aa,bb,dist[erow][ecol]);

        memset(color,0,sizeof(color));
        memset(dist,0,sizeof(dist));
    }

    return 0;
}

void bfs(int x,int y)
{
    int i,j,a,b,row,col;
    int cc[]={2,2,1,1,-1,-1,-2,-2};
    int rr[]={1,-1,2,-2,2,-2,1,-1};
    queue<pq>q;
    q.push(pq(x,y));
    color[x][y]=1;
    dist[x][y]=0;

    int flag=0;
    while(!q.empty())
    {
        row=q.front().x; col=q.front().y;
        q.pop();

        for(int k=0;k<8;k++)
        {
            a=row+rr[k]; b=col+cc[k];
            if(a>0 && a<=8 && b>0 && b<=8 && color[a][b]==0)
            {
                q.push(pq(a,b));
                color[a][b]=1;
                dist[a][b]=dist[row][col]+1;
                if(a==erow && b==ecol)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1) break;
    }

    return ;
}
