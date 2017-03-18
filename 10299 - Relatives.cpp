#include<stdio.h>
#include<math.h>
#include<string.h>

#define max_n 90000
#define max_p 50000

bool flag[max_n];
int prime[max_p];
int arr[100000],temprime[100000];

void seive(void);
int primefact(int a);
int primecheck(int a);

int main(void)
{
    seive();
    int n,a,i,k,kl,x,p,flag;
    double sum,result;
    while(scanf("%d", &a)==1)
    {
        if(a==0) break;
        flag=primecheck(a);
        if(flag==0) printf("%d\n", a-1);
        else
        {
            p=primefact(a);
            result=1.0;
            for(i=0;i<p;i++)
            {
                sum=(temprime[i]-1.0)/temprime[i]*1.0;
                result=sum*result;
            }
            printf("%0.0lf\n", a*result);
        }
    }

    return 0;
}

int primefact(int a)
{
    int n,i,k,kl,x,j,jj;
    x=(int)sqrt(a);
    n=a;
    k=0; kl=0;
    int count=0;
    j=0; jj=0;

    for(i=0;prime[i+1]<=x;i++)
    {
        count=0;
        if(n%prime[i+1]==0)
        {
            while(n%prime[i+1]==0)
            {
                n=n/prime[i+1];
                arr[k]=prime[i+1];
                k++; kl++;
                count++;
            }
            temprime[j]=prime[i+1];
            j++; jj++;
        }
    }
    if(n>1)
    {
        temprime[j]=n;
        j++; jj++;
    }

    return jj;
}

void seive(void)
{
    int i,j,k=1;
    for(i=2;i<=max_n;i++)
    {
        if(flag[i]==0)
        {
            prime[k]=i;
            k++;
            for(j=i+i;j<=max_n;j+=i)
            {
                flag[j]=1;
            }
        }
    }

    return ;
}

int primecheck(int a)
{
    int x,flag,i;
    flag=0;
    x=(int)sqrt(a);
    for(i=2;i<=x;i++)
    {
        if(a%i==0)
        {
            flag=1;
            break;
        }
    }

    return flag;
}

