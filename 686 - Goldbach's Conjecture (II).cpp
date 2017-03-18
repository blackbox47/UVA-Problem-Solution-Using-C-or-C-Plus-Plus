#include<stdio.h>
#include<math.h>

#define max_n 35000
#define max_p 35000

bool flag[max_n];
int prime[max_p];

int seive(void);

int main(void)
{
    int p,x,a,q,count,i,n;
    p=seive();
    while(scanf("%d", &a)==1)
    {
        if(a==0) break;
        x=a/2;
        count=0;
        for(i=0;prime[i]<=x && i<p;i++)
        {
            n=a-prime[i];
            if(n==2 || (n%2==1 && flag[n]==0)) count++;
        }
        printf("%d\n", count);
    }

    return 0;
}

int seive(void)
{
    int i,j,kl,k,r;
    k=0; kl=0;
    prime[k]=2;
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
                for(j=i*i;j<=max_n;j+=r)
                {
                    flag[j]=1;
                }
            }
        }
    }

    return  kl;
}
