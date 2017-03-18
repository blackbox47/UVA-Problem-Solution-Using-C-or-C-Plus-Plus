#include<stdio.h>

int main(void)
{
    long long int a,pro;
    int i;
    while(scanf("%I64d", &a)==1)
    {
        if(a<0)
        {
            if(a%2==0) printf("Underflow!\n");
            else if(a%2!=0) printf("Overflow!\n");
        }
        else if(a>=0)
        {
            if(a<=7)
            {
                printf("Underflow!\n");
                continue;
            }
            else if(a>13)
            {
                printf("Overflow!\n");
                continue;
            }

            pro=1;
            for(i=1;i<=a;i++)
            {
                pro*=i;
            }
            if(a>=8 && a<=13) printf("%I64d\n", pro);
        }
    }

    return 0;
}

