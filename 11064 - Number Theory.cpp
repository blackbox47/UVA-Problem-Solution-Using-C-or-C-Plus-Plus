#include<stdio.h>
#include<math.h>
#include<string.h>
#define max_n 1000005
#define max_p 1000000

bool flag[max_n];
int prime[max_p],arr[1000000];

void seive(void);
int divisor(int n);
int prime_check(int n);
int number_divisor(int n);
int main(void)
{
    seive();
    int n,rev,flag,i,carry,fun;
    double y,z,sum,fun1,ans;
    while(scanf("%d", &n)==1)
    {
//        rev=divisor(n);
        flag=prime_check(n);
    //    printf("%d\n", flag);
        if(flag==0)
        {
            printf("0\n");
    //        carry=n-1;
    //        printf("%d\n", carry+1);
        }
        else
        {
    //        printf("Rajib");
            rev=divisor(n);
            sum=1.0;
            for(i=0;i<rev;i++)
            {
                y=((arr[i]-1.0)/arr[i]);
//                printf("%lf\n", y);
                sum*=y;
            }
            sum=sum*n;
//            printf("sum is:%lf\n", sum);
            fun=number_divisor(n);
//            printf("fun is:%d\n", fun);
            fun1=fun*1.0;
            ans=sum+fun1+1.0;
            ans=n-ans;
            printf("%0.0lf\n", ans);
        }
    }

    return 0;
}

int number_divisor(int n)
{
    int x,i,j,k,kl,count;
    double y;
    x=(int)sqrt(n);
    y=sqrt(n);
    count=0;
    for(i=2;i<=x;i++)
    {
//        printf("Rajib");
        if(n%i==0)
        {
            count=count+2;
//            printf("%d\n", i);
        }
    }
    if(y-x==0) count--;

    return count;
}

int prime_check(int n)
{
    int x,i,j,flag;
    x=(int)sqrt(n);
    flag=0;
    for(i=0;prime[i]<=x;i++)
    {
        if(n%prime[i]==0)
        {
            flag=1;
            break;
        }
    }
//    printf("%d\n", flag);
    if(flag==0) return flag;
    else return flag;
}

int divisor(int n)
{
    int x,i,j,kl,p,k;
    k=0; kl=0;
    x=(int)sqrt(n);
    for(i=0;prime[i]<=x;i++)
    {
        p=n%prime[i];
        if(p==0)
        {
            while(n%prime[i]==0)
            {
                n=n/prime[i];
            }
            arr[k]=prime[i];
            k++; kl++;
            x=(int)sqrt(n);
        }
    }
    if(n>1)
    {
        arr[k]=n;
        k++; kl++;
    }
//    for(k=0;k<kl;k++) printf("%d\n", arr[k]);

    return kl;
}

void seive(void)
{
    int i,j,k,kl,r,qq,w;
    k=0; kl=0;
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
                for(j=i*i;j<=max_n;j+=r)
                {
                    flag[j]=1;
                }
            }
        }
    }
//    for(k=0;k<kl;k++) printf("%d\n", prime[k]);

    return ;
}
