#include<stdio.h>
#include<string.h>
#include<queue>
#define max 8

int kn[max+10][max+10];
int dis[max+10][max+10],color[max+10][max+10];
char arr[3],arr1[3];
int srow,scol,erow,ecol;
using namespace std;
void input(void);
void bfs(int i,int j);
int main(void)
{
    int i,j,p;
    while(scanf("%s %s", &arr,&arr1)==2)
    {
        p=strcmp(arr,arr1);
        if(p==0)
        {
            printf("To get from %s to %s takes 0 knight moves.\n", arr,arr1);
            continue;
        }
        scol=arr[0]-'a'+1;
        srow=arr[1]-'0';
        ecol=arr1[0]-'a'+1;
        erow=arr1[1]-'0';

        for(i=1;i<=8;i++)
        {
            for(j=1;j<=8;j++)
            {
                if( (i==srow && j==scol) )
                {
                    bfs(i,j);
                }
            }
        }
        srow=0;scol=0;erow=0;ecol=0;
        memset(kn,0,sizeof(kn));
        memset(arr,0,sizeof(arr));
        memset(arr1,0,sizeof(arr1));
        memset(color,0,sizeof(color));
        memset(dis,0,sizeof(dis));
    }

    return 0;
}

void bfs(int i,int j)
{
    int row,col,k,a,b;
    int cc[]={2,2,1,1,-1,-1,-2,-2};
    int rr[]={1,-1,2,-2,2,-2,1,-1};
    queue<int>q;
    q.push(i); q.push(j);
    color[i][j]=1;
    dis[i][j]=0;
    int flag=0;
    while(!q.empty())
    {
        row=q.front(); q.pop();
        col=q.front(); q.pop();
        for(k=0;k<8;k++)
        {
            a=row+rr[k];
            b=col+cc[k];
            if(a>0 && a<=max && b>0 && b<=max && color[a][b]==0)
            {
                q.push(a);
                q.push(b);
                dis[a][b]=dis[row][col]+1;
                color[a][b]=1;
                if( (a==erow && b==ecol) )
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1) break;
    }
    printf("To get from %s to %s takes %d knight moves.\n", arr,arr1,dis[a][b]);
    for(k=0;k<(int)q.size();k++) q.pop();

    return ;
}

