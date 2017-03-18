#include<stdio.h>

int main(void)
{
    int a,i,sum;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%5d", &a)==1)
    {
        sum=0;
        for(i=1;i<=a/2;i++)
        {
            a%i;
            if(a%i==0)
            {
                sum+=i;
            }
        }

        if(a==0) printf("END OF OUTPUT\n");
        else if(sum==a)
        {
            printf("%5d  PERFECT\n", a);
        }
        else if(sum<a)
        {
            printf("%5d  DEFICIENT\n", a);
        }
        else if(sum>a)
        {
            printf("%5d  ABUNDANT\n", a);
        }
    }

    return 0;
}
