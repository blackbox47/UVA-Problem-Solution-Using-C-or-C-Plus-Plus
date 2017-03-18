#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
#include<iostream>
#include<string>
#include<queue>

using namespace std;

#define mx 600

struct data
{
    int number;
    char ch;
};

data ans[mx];
char str[mx][mx];
int color[mx][mx],m,n,k;

void BFS(int x,int y);
bool com(data x,data y);

int main(void)
{
    int i,j,qq;
    qq=1;
    while(scanf("%d %d", &m,&n)==2)
    {
        if(m==0 && n==0) break;
        for(i=0;i<m;i++) scanf("%s", &str[i]);

        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(str[i][j]>='A' && str[i][j]<='Z')
                {
                    BFS(i,j);
                }
            }
        }

        sort(ans,ans+k,com);
        printf("Problem %d:\n", qq);
        for(i=0;i<k;i++)
        {
            printf("%c %d\n", ans[i].ch,ans[i].number);
        }

        memset(color,0,sizeof(color));
        memset(ans,0,sizeof(ans));
        k=0;
        qq++;
    }

    return 0;
}

bool com(data x,data y)
{
    if(x.number==y.number)
    {
        if(x.ch<y.ch) return 1;
        else return 0;
    }
    else
    {
        if(x.number>y.number)  return 1;
        else return 0;
    }
}

void BFS(int x,int y)
{
    char c;
    int i,j,row,col,a,b;
    int rr[]={1,0,-1,0};
    int cc[]={0,1,0,-1};
    queue<int>q;
    c=str[x][y];
    q.push(x); q.push(y);
    color[x][y]=1;

    int cnt=1;
    while(!q.empty())
    {
        row=q.front(); q.pop();
        col=q.front(); q.pop();
        for(i=0;i<4;i++)
        {
            a=row+rr[i];
            b=col+cc[i];
            if(a>=0 && a<m && b>=0 && b<n && color[a][b]==0 && str[a][b]==c)
            {
                q.push(a); q.push(b);
                color[a][b]=1;
                str[a][b]='.';
                cnt++;
            }
        }
    }
    ans[k].number=cnt;
    ans[k].ch=c;
    k++;

    return ;
}
