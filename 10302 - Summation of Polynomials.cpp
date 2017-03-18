#include<stdio.h>

int main(void)
{
    long long int a,sum,i,c;
    while(scanf("%lld", &a)==1)
    {
        sum=0;
        for(i=1;i<=a;i++)
        {
            c=i*i*i;
            sum+=c;
        }
        printf("%lld\n", sum);
    }
        return 0;
}
