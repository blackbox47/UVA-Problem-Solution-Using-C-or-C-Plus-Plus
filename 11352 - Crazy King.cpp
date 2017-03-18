#include<stdio.h>
#include<queue>
#include<string.h>
#define mx 110

using namespace std;
char str[mx][mx];
int ck[mx][mx],dis[mx][mx];
int ROW,COL;
int srow,scol,erow,ecol;
void bfs(int i,int j);
void made(int i,int j);
int main(void)
{
    int a,b,i,j,test,qq;
    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        scanf("%d %d", &a,&b);
        ROW=a; COL=b;
        for(i=0;i<a;i++) scanf("%s", &str[i]);
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                if(str[i][j]=='Z') ck[i][j]=1;
                else if(str[i][j]=='A')
                {
                    srow=i; scol=j;
                }
                else if(str[i][j]=='B')
                {
                    erow=i; ecol=j;
                }
            }
        }
        int count=0;
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                if(ck[i][j]==1)
                {
                    made(i,j);
                    count++;
                }
            }
        }
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                if(ck[i][j]==2) ck[i][j]=1;
            }
        }
        bfs(srow,scol);
        srow=0; scol=0; erow=0; ecol=0;
        ROW=0; COL=0;
        memset(str,0,sizeof(str));
        memset(ck,0,sizeof(ck));
        memset(dis,0,sizeof(dis));
    }

    return 0;
}

void bfs(int i,int j)
{
    int a,b,k,row,col,flag;
    int rr[]={-1,-1,-1,0,0,1,1,1};
    int cc[]={-1,0,1,-1,1,-1,0,1};
    queue<int>q;
    q.push(i); q.push(j);
    ck[i][j]=2;
    dis[i][j]=0;
    flag=0;
    while(!q.empty())
    {
        row=q.front(); q.pop();
        col=q.front(); q.pop();
        for(k=0;k<8;k++)
        {
            a=row+rr[k];
            b=col+cc[k];
            if( a>-1 && a<ROW && b>-1 && b<COL && ck[a][b]==0)
            {
                q.push(a);
                q.push(b);
                ck[a][b]=2;
                dis[a][b]=dis[row][col]+1;
                if(a==erow && b==ecol)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1) break;
    }
    if(flag==1)
    {
        printf("Minimal possible length of a trip is %d\n", dis[a][b]);
    }
    else printf("King Peter, you can't go now!\n");
    for(k=0;k<(int)q.size();k++) q.pop();


    return ;
}

void made(int i,int j)
{
    int a,b,row,col,k;
    int rr[]={2,2,1,1,-1,-2,-2,-1};
    int cc[]={1,-1,2,-2,2,1,-1,-2};
    row=i;
    col=j;
    ck[i][j]=1;
    for(k=0;k<8;k++)
    {
        a=row+rr[k];
        b=col+cc[k];
        if(a>-1 && a<ROW && b>-1 && b<COL && ck[a][b]==0 && str[a][b]!='A' && str[a][b]!='B' )
        {
            ck[a][b]=2;
        }
    }

    return ;
}
