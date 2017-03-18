#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
#define max_n 1000005
#define max_p 1000000

using namespace std;
bool flag[max_n];
long long int prime[max_p];
long long int arr[1000000];

long long int seive(void);
int main(void)
{
//    freopen("Tell.txt","w",stdout);
    long long int i,a,b,j,p,var,count,test,qq,con;
    p=seive();
    scanf("%lld", &test);
    for(qq=1;qq<=test;qq++)
    {
        scanf("%lld %lld", &a,&b);
        for(i=0;i<p;i++)
        {
            if(arr[i]>=a)
            {
                var=i;
                break;
            }
        }
        count=0;
        for(i=var;i<p;i++)
        {
            if(arr[i]>b) break;
            count++;
        }
        printf("%lld\n", count);
    }

    return 0;
}

long long int seive(void)
{
    long long int i,j,k=0,r,kl=0,qq,var,con;
    prime[0]=2;
    k++; kl++;
    for(i=3;i<=max_n;i+=2)
    {
        if(flag[i]==0)
        {
            prime[k]=i;
            k++; kl++;
            r=2*i;
            if(max_n/i>=i)
            {
                for(j=i*i;j<=max_n;j+=i)
                {
                    flag[j]=1;
                }
            }
        }
    }
    k=0; qq=0;
    con=(long long int)pow(10,12);
    for(i=0;i<kl;i++)
    {
        for(j=2; ;j++)
        {
            var=(long long int)pow(prime[i],j);
            if( var>con) break;
            arr[k]=var;
            k++; qq++;
        }
    }
    sort(&arr[0],&arr[qq]);
//    for(k=0;k<qq;k++) printf("%I64d\n", arr[k]);

    return qq;
}

