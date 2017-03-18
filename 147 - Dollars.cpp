#include<stdio.h>
#define max_n 32000
#define eps 1e-7

long long arr[max_n],str[20];
void coin(void);
int main(void)
{
//    freopen("Tell.txt","w",stdout);
    long long i,j,b,a,x;
    coin();
    while(scanf("%lld.%lld", &a,&x)==2)
    {
        if(a==0 && x==0) break;
//        printf("%I64d.%I64d\n", a,x);
        b=(a*100)+x;
//        printf("%I64d\n", b);

        printf("%3lld.%lld%lld%17lld\n", a,x/10,x%10,arr[b]);
    }

    return 0;
}

void coin(void)
{
    long long i,j,var,k;
    str[0]=5; str[1]=10; str[2]=20; str[3]=50; str[4]=100;
    str[5]=200; str[6]=500; str[7]=1000; str[8]=2000; str[9]=5000; str[10]=10000;
    arr[0]=1;
    for(k=0;k<11;k++)
    {
        for(i=0;i<=max_n;i++)
        {
            if(arr[i]!=0)
            {
                var=i+str[k];
                if(var>max_n) break;
                arr[var]+=arr[i];
            }
        }
    }

//    for(i=0;i<=max_n;i++) printf("%I64d %I64d\n", i,arr[i]);

    return ;
}
