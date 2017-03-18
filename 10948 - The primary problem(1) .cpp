#include<stdio.h>
#include<math.h>
#define max_n 1000001
#define max_p 1000000

bool flag[max_n];
int prime[max_p];

int seive(void);
int main(void)
{
    int p,i,j,sent,a,fla,var,var1;
    p=seive();
    while(scanf("%d", &a)==1)
    {
        if(a==0) break;
        fla=0;
        for(i=0;prime[i]<=a && i<p;i++)
        {
            sent=a-prime[i];
            if(sent==2 || (sent%2==1 && flag[sent]==0))
            {
                fla++;
                printf("%d:\n%d+%d\n", a,prime[i],sent);
                break;
            }
        }
        if(fla==0) printf("%d:\nNO WAY!\n", a);
    }

    return 0;
}

int seive(void)
{
    int i,j,k,kl,r;
    k=0; kl=0;
    prime[k]=2;
    k=1; kl=1;
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
//    for(k=0;k<kl;k++) printf("%d\n", prime[k]);

    return kl;
}
