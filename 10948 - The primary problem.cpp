#include<stdio.h>
#include<math.h>
#define max_n 1000
#define max_p 1000

bool flag[max_n];
int prime[max_p];

int seive(void);
int prime_check(int a);
int main(void)
{
    int rev,i,a,sent,x,q,var;
    rev=seive();
    while(scanf("%d", &a)==1)
    {
        if(a==0) break;
        var=0;
        for(i=0;prime[i]<=a && i<rev ;i++)
        {
            sent=a-prime[i];
            q=prime_check(sent);
            if(q==1)
            {
                var++;
                printf("%d:\n%d+%d\n", a,prime[i],sent);
                break;
            }
        }

        if(var==0) printf("%d:\nNO WAY!\n", a);
    }

    return 0;
}

int prime_check(int a)
{
    if(a==0 || a==1) return 0;
    int i,j,flag,x;
    x=(int)sqrt(a);
    flag=1;
    for(i=2;i<=x;i++)
    {
        if(a%i==0)
        {
            flag=0;
            break;
        }
    }

    return flag;
}

int seive(void)
{
    int i,j,k,kl,r;
    k=0; kl=0;
    prime[0]=2;
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
//    printf("kl is:%d\n", kl);

    return kl;
}
