#include<stdio.h>
#include<queue>
#include<string.h>
#define max 30

int war[max][max];
char str[max][max];
void bfs(int i,int j);
using namespace std;
int main(void)
{
    int a,count,i,j,qq;
    qq=1;
    while(scanf("%d", &a)==1)
    {
        for(i=0;i<a;i++) scanf("%s", &str[i]);
        for(i=0;i<a;i++)
        {
            for(j=0;j<a;j++)
            {
                if(str[i][j]=='1') war[i][j]=1;
                else war[i][j]=0;
            }
        }
        count=0;
        for(i=0;i<a;i++)
        {
            for(j=0;j<a;j++)
            {
                if(war[i][j]==1)
                {
                    bfs(i,j);
                    count++;
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n", qq,count);
        qq++;
        for(i=0;i<a;i++) memset(str,0,sizeof(str));
    }

    return 0;
}

void bfs(int i,int j)
{
    int a,b,k,row,col;
    int rr[]={-1,-1,-1,0,1,1,1,0};
    int cc[]={-1,0,1,1,1,0,-1,-1};
    queue<int>q;
    q.push(i); q.push(j);
    war[i][j]=0;
    while(!q.empty())
    {
        row=q.front(); q.pop();
        col=q.front(); q.pop();
        for(k=0;k<8;k++)
        {
            a=row+rr[k];
            b=col+cc[k];
            if(row>-1 && row<=max && col>-1 && col<=max && war[a][b]==1)
            {
                q.push(a);
                q.push(b);
                war[a][b]=0;
            }
        }
    }
    for(k=0;k<(int)q.size();k++) q.pop();

    return ;
}
