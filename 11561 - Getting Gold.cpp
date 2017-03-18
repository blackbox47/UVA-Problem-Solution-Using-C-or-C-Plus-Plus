#include<stdio.h>
#include<string>
#include<string.h>
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

#define mx 60

char str[mx][mx];
int arr[mx][mx],cnt,m,n;
bool test[mx][mx],color[mx][mx];

void BFS(int x,int y);
void trap(int x,int y);

int main(void)
{
    int i,j;
    while(scanf("%d %d", &m,&n)==2)
    {
        swap(m,n);
        for(i=0;i<m;i++) scanf("%s", str[i]);

        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(str[i][j]=='P') arr[i][j]=4;
                else if(str[i][j]=='G') arr[i][j]=2;
                else if(str[i][j]=='.') arr[i][j]=1;
                else if(str[i][j]=='T') arr[i][j]=3;
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(arr[i][j]==3)
                {
                    trap(i,j);
                }
            }
        }

        int flag=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(arr[i][j]==4 and test[i][j]==0)
                {
                    BFS(i,j);
                    flag=1; break;
                }
            }
            if(flag==1) break;
        }
        printf("%d\n", cnt);

        memset(arr,0,sizeof(arr));
        memset(test,0,sizeof(test));
        memset(color,0,sizeof(color));
        cnt=0;
    }

    return 0;
}

void trap(int x,int y)
{
    int i,j,a,b;
    int rr[]={1,0,-1,0};
    int cc[]={0,1,0,-1};
    for(i=0;i<4;i++)
    {
        a=x+rr[i];
        b=y+cc[i];
        if( a>=0 and a<m and b>=0 and b<n )
        {
            test[a][b]=1;
        }
    }

    return ;
}

void BFS(int x,int y)
{
    int i,j,row,col,a,b;
    queue<int>q;
    int rr[]={1,0,-1,0};
    int cc[]={0,1,0,-1};

    q.push(x); q.push(y);
    color[i][j]=1;

    while(!q.empty())
    {
        row=q.front(); q.pop();
        col=q.front(); q.pop();
        for(i=0;i<4;i++)
        {
            a=row+rr[i];
            b=col+cc[i];
            if( a>=0 and a<m and b>=0 and b<n and color[a][b]==0 and (arr[a][b]==2 ||arr[a][b]==1) )
            {

                if(test[a][b]==1 and arr[a][b]==2 )
                {
                    color[a][b]=1;
                    cnt++;
                }
                else if(test[a][b]==0)
                {
                    q.push(a); q.push(b);
                    color[a][b]=1;
                    if(arr[a][b]==2) cnt++;
                }
            }
        }
    }

    return ;
}

//#()&!

