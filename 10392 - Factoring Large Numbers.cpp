#include<stdio.h>
#include<math.h>
#include <iostream>
#include<vector>
#define max_n 10000000
#define max_p 10000000

using namespace std;
long long int prime[max_p];
bool flag[max_n];

void seive(void);

int main(void)
{
    seive();
    long long int a,i,x,n,k,kl;
    vector<long long int>v;
    while(scanf("%lld", &a)==1)
    {
        if(a==-1) break;
        x=(long long int)sqrt(a);
//        k=0; kl=0;
        for(i=0; prime[i]<=x && prime[i]<1000000 ;i++)
        {
            n=a%prime[i];
            if(n==0)
            {
                while(1)
                {
                    n=a%prime[i];
                    if(n!=0) break;
                    a=a/prime[i];
                    v.push_back(prime[i]);
                }
            }
        }
        if(a!=1) v.push_back(a);
        for(i=0;i<(long long int)v.size();i++) printf("    %lld\n", v[i]);
        printf("\n");
        v.clear();
    }

    return 0;
}

void seive(void)
{
    int i,j,k,kl,r;
    prime[0]=2;
    k=1; kl=1;
    for(i=3;i<max_n;i+=2)
    {
        if(flag[i]==0)
        {
            prime[k]=i;
            k++; kl++;
            r=2*i;
            if(max_n/i>=i)
            {
                for(j=i*i;j<max_n;j+=r)
                {
                    flag[j]=1;
                }
            }
        }
    }
    cout<<k<<" "<<prime[k-1]<<endl;
//    printf("max prime %d prime %I64d\n",k,prime[k]);
//    for(k=0;k<kl;k++) printf("%d\n", prime[k]);

    return ;
}
