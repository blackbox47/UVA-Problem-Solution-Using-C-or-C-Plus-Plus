#include<stdio.h>
#include<vector>
#include<string.h>
#define mx 15

using namespace std;

int arr[mx][mx];
vector<int>v;

int main(void)
{
    int i,a,j,input,tem,sum,qq;
    qq=1;
    while(scanf("%d", &input)==1)
    {
        a=input;
        if(a==0) break;

        for(i=1;i<=a;i++)
        {
            for(j=1;j<=a;j++) scanf("%d", &arr[i][j]);
        }

        int count=0;
        printf("Case %d: ", qq);
        if(a==1) printf("%d\n", arr[1][1]);
        else
        {
            sum=0; tem=1;
            while(1)
            {
                if(count==(input*input)) break;
                for(i=tem;i<=a;i++)
                {
                    for(j=tem;j<=a;j++)
                    {
                        if(i==tem || j==tem || i==a || j==a)
                        {
                            count++;
                            sum+=arr[i][j];
                        }
                    }
                }
                v.push_back(sum);
                tem++; a--;
                sum=0;
            }
            for(i=0;i<(int)v.size()-1;i++) printf("%d ", v[i]);
            printf("%d\n", v[i]);
        }

        memset(arr,0,sizeof(arr));
        v.clear();
        qq++;
    }

    return 0;
}
