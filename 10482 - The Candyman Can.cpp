#include<stdio.h>
#include<vector>
#include<string.h>
#include<string>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<stdlib.h>
#define mx 700

using namespace std;

int dp[mx][mx];
vector<int>v;

void dpfun(int sum);

int main(void)
{
//    freopen("TELL.txt","w",stdout);
    int a,i,j,k,sum,tem,var,first,second,third,mn,minas,x,y,z,test,qq;

    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        scanf("%d", &a);
        sum=0;
        for(i=0;i<a;i++)
        {
            scanf("%d", &tem);
            v.push_back(tem);
            sum+=tem;
        }

        dpfun(sum);

        mn=2147483645;
        for(i=0;i<=sum;i++)
        {
            for(j=0;j<=sum;j++)
            {
                if(dp[i][j]==1)
                {
                    first=i; second=j;
                    third=sum-(first+second);
    //                printf("%d %d %d\n", first,second,third);

                    x=abs(first-second);
                    y=abs(first-third);
                    z=abs(second-third);
    //
                    tem=max(x,y);
                    var=max(tem,z);
                    if(mn>var) mn=var;
                }
            }
        }
        printf("Case %d: %d\n", qq,mn);

        memset(dp,0,sizeof(dp));
        v.clear();
    }

    return 0;
}

void dpfun(int sum)
{
    int i,j,tem,var,k;
    dp[0][0]=1;
    int count=0;

    for(k=0;k<(int)v.size();k++)
    {
        for(i=sum;i>=0;i--)
        {
            for(j=sum;j>=0;j--)
            {
                if(dp[i][j]==1)
                {
                    var=i+v[k];
                    dp[var][j]=1;
                    tem=j+v[k];
                    dp[i][tem]=1;
                }
            }
        }
    }

    return ;
}
