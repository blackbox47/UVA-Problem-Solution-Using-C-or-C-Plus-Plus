#include<stdio.h>
#include<algorithm>
#include<string.h>
#define max_n 110
#define oo (1<<25)

using namespace std;

int arr[max_n][max_n],ans[max_n];

int main(void)
{
    int i,j,test,qq,n,r,x,y,k,mx,start,end;
    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        scanf("%d %d", &n,&r);

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                arr[i][j]=oo;
            }
            arr[i][i]=0;
        }

        for(i=1;i<=r;i++)
        {
            scanf("%d %d", &x,&y);
            arr[x][y]=1;
            arr[y][x]=1;
        }

        for(k=0;k<n;k++)
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    arr[i][j]=min( arr[i][j],(arr[i][k]+arr[k][j]) );
                }
            }
        }

        scanf("%d %d", &start,&end);

        mx=0;
        for(i=0;i<n;i++)
        {
            ans[i]=arr[start][i]+arr[end][i];
            if(mx<ans[i]) mx=ans[i];
        }
        printf("Case %d: %d\n", qq,mx);

        memset(arr,0,sizeof(arr));
        memset(ans,0,sizeof(ans));
    }

    return 0;
}
