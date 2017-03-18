#include<stdio.h>
#define max_n 10000

long long arr[max_n],str[10];
void coin(void);
int main(void)
{
//    freopen("Tell.txt","w",stdout);
    long long i,a,j;
    coin();
    while(scanf("%lld", &a)==1)
    {
        printf("%lld\n", arr[a]);
    }

    return 0;
}

void coin(void)
{
    long long i,j,var,k;
    str[0]=1; str[1]=5; str[2]=10; str[3]=25; str[4]=50;
    arr[0]=1;
    for(k=0;k<5;k++)
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
