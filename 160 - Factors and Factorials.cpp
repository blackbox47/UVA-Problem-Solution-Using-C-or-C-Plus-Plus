#include<stdio.h>
#include<string.h>

#define max_n 120
#define max_p 100

bool flag[max_n];
int prime[max_p];
int store[1000];
int k;
int seive(void);

int main(void)
{
//    freopen("Tell11.txt","w",stdout);
    int i,p,j,a,n,x,sum,kl;
    p=seive();
    while(scanf("%d", &a)==1)
    {
        if(a==0) break;
        n=a;
        k=0; kl=0;
        for(i=0;prime[i]<=a;i++)
        {
            sum=0;
            n=a;
            while(n>1)
            {
                x=n/prime[i];
                n=x;
                sum+=n;
            }
            store[k]=sum;
            k++; kl++;
        }
        printf("%3d! =", a);
        if(kl<=15)
        {
            for(k=0;k<kl-1;k++) printf("%3d", store[k]);
            printf("%3d", store[kl-1]);
            printf("\n");
        }
        else
        {
            for(k=0;k<15;k++)
            {
                printf("%3d", store[k]);
            }
            printf("\n");
            printf("      ");
            for(k=15;k<kl-1;k++)
            {
                printf("%3d", store[k]);
            }
            printf("%3d", store[kl-1]);
            printf("\n");
        }
        memset(store,0,sizeof(store));
    }

    return 0;
}

int seive(void)
{
    int i,j,kl;
    kl=0;
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
