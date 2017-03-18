#include<stdio.h>
#include<algorithm>
#include<string.h>

using namespace std;

char s1[1100],s2[1100];
int m[1100][1100];

int main(void)
{
    int i,j,M,N;
    while(gets(s1))
    {
        gets(s2);
        M=strlen(s1); N=strlen(s2);

        for(i=M-1;i>=0;i--)
        {
            for(j=N-1;j>=0;j--)
            {
                if(i==M || j==N) {m[i][j]=0; continue;}
                if(s1[i]==s2[j]) m[i][j]=1+m[i+1][j+1];

                else m[i][j]=max(m[i][j+1],m[i+1][j]);
            }
        }
        printf("%d\n", m[0][0]);

        memset(s1,0,sizeof(s1));
        memset(s2,0,sizeof(s2));
        memset(m,0,sizeof(m));
    }

    return 0;
}
