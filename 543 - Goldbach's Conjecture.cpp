#include<stdio.h>
#include<math.h>
#define max_n 1000001
#define max_p 1000000

bool flag[max_n];
int prime[max_p];

int seive(void);
int main(void)
{
    int a,i,j,p,kl,k,fla,q;
    p=seive();
    while(scanf("%d", &a)==1)
    {
        if(a==0) break;
        fla=0;
        for(i=0;prime[i]<=a && i<p;i++)
        {
             q=a-prime[i];
             if(q==2 || (q%2==1 && flag[q]==0))
             {
                 fla++;
                 printf("%d = %d + %d\n", a,prime[i],q);
                 break;
             }
        }
        if(fla==0) printf("Goldbach's conjecture is wrong.\n");
    }

    return 0;
}


int seive(void)
{
    int i,kl,j ,k;
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
