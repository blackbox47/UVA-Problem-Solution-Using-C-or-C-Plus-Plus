#include<stdio.h>
#include<string.h>

#define mx 128

using namespace std;

long long arr[mx],fact[mx];
char str[mx];

void pre(void);

int main(void)
{
    pre();
    long long i,j,len,ans,test,qq;
    scanf("%lld", &test);
    for(qq=1;qq<=test;qq++)
    {
        scanf("%s", &str);
        len=strlen(str);

        for(i=0;i<len;i++)
        {
            arr[str[i]]++;
        }

        ans=fact[len];

        for(i=65;i<=90;i++)
        {
            if(arr[i]!=0)
            {
                ans=ans/fact[arr[i]];
            }
        }
        printf("Data set %lld: %lld\n", qq,ans);

        memset(arr,0,sizeof(arr));
        memset(str,0,sizeof(str));
    }

    return 0;
}

void pre(void)
{
    long long i;

    fact[0]=1;
    for(i=1;i<21;i++)
    {
        fact[i]=fact[i-1]*i;
    }

    return ;
}
