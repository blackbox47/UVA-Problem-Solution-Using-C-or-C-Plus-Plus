#include<stdio.h>

int main(void)
{
    long long int a,b;
    while(scanf("%lld%lld", &a,&b)==2)
    {
        if(b<a)
        {
            printf("%lld", a-b);
            printf("\n");
        }
        else
        {
            printf("%lld", b-a);
            printf("\n");
        }
    }

    return 0;
}
