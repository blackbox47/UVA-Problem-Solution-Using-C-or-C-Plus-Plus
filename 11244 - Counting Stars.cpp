#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<queue>

using namespace std;

#define mx 110

char str[mx][mx];
int r,c,arr[mx][mx];

int bfs(int x,int y);

int main(void)
{
    int i,j;
    while(scanf("%d %d", &r,&c)==2)
    {
        if(r==0 && c==0) break;
        for(i=0;i<r;i++) scanf("%s", &str[i]);

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(str[i][j]=='*') arr[i][j]=2;
                else arr[i][j]=3;
            }
        }
        int cnt=0;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(arr[i][j]==2)
                {
                    int ans=bfs(i,j);
                    if(ans!=-1) cnt++;
                }
            }
        }
        printf("%d\n", cnt);
        memset(arr,0,sizeof(arr));
    }

    return 0;
}

int bfs(int x,int y)
{
    int i,j,a,b,row,col;
    int rr[]={-1,-1,-1,0,1,1,1,0};
    int cc[]={-1,0,1,1,1,0,-1,-1};

    for(i=0;i<8;i++)
    {
        a=x+rr[i]; b=y+cc[i];
        if(arr[a][b]==2) return -1;
    }


    return 0;
}
