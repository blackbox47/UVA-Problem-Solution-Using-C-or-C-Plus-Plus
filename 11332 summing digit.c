#include<stdio.h>

int main(void)
{
    long long a,b,c,sum,x;
    while(scanf("%lld", &a)==1)
    {
        if(a<=0) break;
            for(;;)
            {
                sum=0;
                for(;;)
                {
                    b=a%10;
                    c=a/10;
                    a=c;
                    sum+=b;
                    if(a<10) break;
                }
                a=sum+a;
                if(a<10)
                {
                    printf("%lld\n", a);
                    break;
                }
            }
        }

    return 0;
}
