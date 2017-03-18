#include<stdio.h>
#include<math.h>
#define max_n 1200
#define max_p 1000
#define mx 1000005

bool flag[max_n];
int prime[max_p];

void seive(void);
int divisor(int a);
int arr[mx];
int main(void)
{
    int i,j,k,a,b,sum,p,kl;
    seive();
    k=2; kl=1;
    for(i=2;i<=mx;i++)
    {
        p=divisor(i);
        arr[k]=p+arr[i-1];
        k++; kl++;
    }

    while(scanf("%d", &a)==1)
    {
        printf("%d\n", arr[a]);
//        sum=0;
//        for(k=2;k<=a;k++)
//        {
//            sum+=arr[k];
//        }
//        printf("%d\n", sum);
    }

    return 0;
}

int divisor(int a)
{
    int i,j,k,x,p,count,sum;
    x=(int)sqrt(a);
    sum=1; count=0;
    for(i=0;prime[i]<=x;i++)
    {
        p=a%prime[i];
        if(p==0)
        {
            while(a%prime[i]==0)
            {
                a/=prime[i];
                count++;
            }
        }
    }
    if(a>1)
    {
        count++;
    }

    return count;
}

void seive(void)
{
    int i,j,k=0,kl=0,r;
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

    return ;
}
