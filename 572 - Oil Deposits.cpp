#include<stdio.h>
#include<string.h>
#include<queue>
#define max 105

using namespace std;
char str[max][max];
int oil[max][max];
void bfs(int i,int j);
int main(void)
{
    int a,b,i,count,j,test,qq;
    while(scanf("%d %d", &a,&b)==2)
    {
        if(a==0 && b==0) break;
        for(i=0;i<a;i++) scanf("%s", &str[i]);
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                if(str[i][j]=='@') oil[i][j]=1;
                else if(str[i][j]=='*')oil[i][j]=0;
            }
        }
        count=0;
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                if(oil[i][j]==1)
                {
                    bfs(i,j);
                    count++;
                }
            }
        }
        printf("%d\n", count);
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
    q.push(i);
    q.push(j);
    oil[i][j]=0;
    while(!q.empty())
    {
        row=q.front(); q.pop();
        col=q.front(); q.pop();
        for(k=0;k<8;k++)
        {
            a=row+rr[k];
            b=col+cc[k];
            if(a>-1 && a<max && b>-1 && b<max && oil[a][b]==1)
            {
                q.push(a);
                q.push(b);
                oil[a][b]=0;
            }
        }
    }
    for(k=0;k<(int)q.size();k++) q.pop();

    return ;
}
