#include<stdio.h>

int main(void)
{
    long long int a,b,c,test;
    scanf("%lld", &test);
    while(test--)
    {
        scanf("%lld %lld %lld", &a,&b,&c);
        if( (a+b)>c && (b+c)>a && (a+c)>b )
        {
            printf("OK\n");
        }
        else printf("Wrong!!\n");
    }

    return 0;
}
