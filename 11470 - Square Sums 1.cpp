#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
#include<queue>
#include<string>
#include<iostream>

using namespace std;

#define mx 100

int n,arr[mx][mx],color[mx][mx],sum;

void BFS(int x,int y);

int main(void)
{
    int i,j,qq;
    vector<int>v;
    qq=1;
    while(scanf("%d", &n)==1)
    {
        if(n==0) break;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++) scanf("%d", &arr[i][j]);
        }

        int loop;
        if(n%2==0) loop=n/2;
        else loop=(n/2)+1;
        for(int k=1;k<=loop;k++)
        {
            sum=0;
            BFS(k,k);
            for(i=k;i<=n;i++)
            {
                for(j=k;j<=n;j++)
                {
                    if(color[i][j]==1) sum+=arr[i][j];
                }
            }
            v.push_back(sum);
            n--;
        }
        printf("Case %d: ", qq);
        for(i=0;i<(int)v.size()-1;i++) printf("%d ", v[i]);
        int var=(int)v.size()-1;
        printf("%d\n", v[var]);

        v.clear();
        memset(color,0,sizeof(color));
        qq++;
    }

    return 0;
}

void BFS(int x,int y)
{
    int i,j,row,col,a,b;
    int rr[]={0,-1,0,1};
    int cc[]={1,0,-1,0};
    queue<int>q;
    q.push(x); q.push(y);
    color[x][y]=1;

    while(!q.empty())
    {
        row=q.front(); q.pop();
        col=q.front(); q.pop();
        for(i=0;i<4;i++)
        {
            a=row+rr[i]; b=col+cc[i];
            if( (a==n || a==x || b==n || b==x) && color[a][b]==0 )
            {
                q.push(a); q.push(b);
                color[a][b]=1;
            }
        }
    }

    return ;
}
