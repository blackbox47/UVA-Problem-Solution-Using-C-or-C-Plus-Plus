#include<stdio.h>
#include<math.h>

#define max_n 18500000
#define max_p 10000000

int prime[max_p];
bool flag[max_n];
int dif[10000000];

int seive(void);

int main(void)
{
    int p,i,k,kl,a;
    p=seive();
    k=0; kl=0;
    for(i=0;i<p;i++)
    {
        if(prime[i+1]-prime[i]==2)
        {
            dif[k]=prime[i];
            k++; kl++;
            dif[k]=prime[i+1];
            k++; kl++;
        }
    }
    while(scanf("%d", &a)==1)
    {
        a=2*a-1;
        printf("(%d, %d)\n", dif[a-1],dif[a]);
    }

    return 0;
}

int seive(void)
{
    int i,j,kl,k;
    k=0; kl=0;
    for(i=2;i<=max_n;i++)
    {
        if(flag[i]==0)
        {
            prime[k]=i;
            k++; kl++;
            for(j=i+i;j<=max_n;j+=i)
            {
                flag[j]=1;
            }
        }
    }

    return kl;
}
