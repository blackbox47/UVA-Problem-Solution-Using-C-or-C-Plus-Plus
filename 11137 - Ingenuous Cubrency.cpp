#include<stdio.h>
#include<vector>
#include<string.h>
#define mx 20000

using namespace std;

void coin(void);
void pregenerate(void);

long long arr[mx+10];
vector<long long>v;

int main(void)
{
    long long a,i,j,var,tem;
    coin();
    pregenerate();
    while(scanf("%lld", &a)==1)
    {
        printf("%lld\n", arr[a]);
    }


    return 0;
}

void pregenerate(void)
{
    long long i,j,var,tem;
    arr[0]=1;
    for(i=0;i<(long long)v.size();i++)
    {
        for(j=0;j<=mx;j++)
        {
            if(arr[j]!=0)
            {
                var=j+v[i];
                if(var>mx) break;
                arr[var]+=arr[j];
            }
        }
    }
//    printf("%d\n", arr[a]);


    return ;
}

void coin(void)
{
    long long i,var;
    for(i=1;i<25;i++)
    {
        var=i*i*i;
        v.push_back(var);
    }
//    for(i=0;i<(int)v.size();i++) printf("%d\n", v[i]);

    return ;
}
