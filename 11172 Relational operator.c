#include<stdio.h>

int main(void)
{
    long long int a,i,b,c;
    while(scanf("%lld", &a)==1)
    {
        for(i=1;i<=a;i++)
        {
            scanf("%lld %lld", &b,&c);
            if(b>c)
            {
                printf(">");
                printf("\n");
            }
            else if(b==c)
            {
                printf("=");
                printf("\n");
            }
            else if(b<c)
            {
                printf("<");
                printf("\n");
            }
        }
    }

    return 0;
}
