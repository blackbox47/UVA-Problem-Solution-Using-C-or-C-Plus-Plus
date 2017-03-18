#include<stdio.h>

int main(void)
{
    long long int a,b;
    while(scanf("%I64d %I64d", &a,&b)==2)
    {
        printf("%I64d\n", a^b);
    }

    return 0;
}
