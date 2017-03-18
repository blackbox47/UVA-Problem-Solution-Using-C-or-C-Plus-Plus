#include<stdio.h>
#include<string.h>
#include<queue>
#define max 110

char str[max][max];
int mind[max][max];
int tem[max][max];
void bfs(int i,int j);
using namespace std;
int main(void)
{
    int a,b,i,j,count,flag,qq;
    qq=1;
    flag=0;
    while(scanf("%d %d", &a,&b)==2)
    {
        if(a==0 && b==0) break;
        for(i=0;i<a;i++) scanf("%s", &str[i]);

        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                if(str[i][j]=='*') mind[i][j]=1;
                else mind[i][j]=0;
            }
        }
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                if(mind[i][j]==1)
                {
                    bfs(i,j);
                }
            }
        }
        if(flag==1) printf("\n");
        printf("Field #%d:\n", qq);
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                if(str[i][j]=='*') printf("%c", str[i][j]);
                else if(str[i][j]!='*') printf("%d", tem[i][j]);
            }
            printf("\n");
        }
        flag=1;
        memset(str,0,sizeof(str));
        memset(tem,0,sizeof(tem));
        qq++;
    }

    return 0;
}

void bfs(int i,int j)
{
    int rr[]={-1,-1,-1,0,1,1,1,0};
    int cc[]={-1,0,1,1,1,0,-1,-1};
    int a,b,k,row,col,var;
    queue<int>q;
    q.push(i); q.push(j);
    mind[i][j]=0;
    while(!q.empty())
    {
        row=q.front(); q.pop();
        col=q.front(); q.pop();
        for(k=0;k<8;k++)
        {
            a=row+rr[k];
            b=col+cc[k];
            if(row>-1 && row<=max && col>-1 && col<=max)
            {
                var=tem[a][b];
                var=var+1;
                tem[a][b]=var;
            }
            if(row>-1 && row<=max && col>-1 && col<=max && mind[a][b]==1)
            {
                q.push(a);
                q.push(b);
                mind[a][b]=0;
            }
        }
    }
    for(k=0;k<(int)q.size();k++) q.pop();

    return ;
}
