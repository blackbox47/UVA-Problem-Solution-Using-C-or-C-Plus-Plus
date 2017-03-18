#include<stdio.h>
#include<algorithm>
#include<string.h>
#define mx 1100

char s1[mx],s2[mx];
int ans[mx][mx];

using namespace std;

int main(void)
{
    int i,j,M,N;
    char s3[mx],s4[mx];
    while(gets(s1))
    {
        gets(s2);
        M=strlen(s1); N=strlen(s2);

        for(i=0,j=1;i<M;i++,j++) s3[j]=s1[i];
        for(i=0,j=1;i<N;i++,j++) s4[j]=s2[i];

        for(i=0;i<=M;i++)
        {
            for(j=0;j<=N;j++)
            {
                if(i==0 || j==0) {ans[i][j]=0; continue;}
                if(s3[i]==s4[j]) ans[i][j]=ans[i-1][j-1]+1;
                else
                {
                    ans[i][j]=max( ans[i][j-1],ans[i-1][j] );
                }
            }
        }
        printf("%d\n", ans[M][N]);

        memset(s3,0,sizeof(s3));
        memset(s4,0,sizeof(s4));
        memset(ans,0,sizeof(ans));
    }

    return 0;
}
