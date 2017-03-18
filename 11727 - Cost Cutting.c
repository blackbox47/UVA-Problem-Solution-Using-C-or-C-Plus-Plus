#include<stdio.h>

int main(void)
{
    long long int a,b,c,x,i;
    while(scanf("%lld", &x)==1)
    {
        for(i=1;i<=x; )
        {
            scanf("%lld %lld %lld", &a,&b,&c);

            if(a>b && a>c)
            {
                if(b>c)
                {
                    printf("Case %lld: %lld\n", i,b);
                    i++;
                }
                else
                {
                    printf("Case %lld: %lld\n", i,c);
                    i++;
                }
            }
            else if(b>c && b>a)
            {
                if(a>c)
                {
                    printf("Case %lld: %lld\n", i,a);
                    i++;
                }
                else
                {
                    printf("Case %lld: %lld\n", i,c);
                    i++;
                }
            }
            else if(c>a && c>b)
            {
                if(a>b)
                {
                    printf("Case %lld: %lld\n", i,a);
                    i++;
                }
                else
                {
                    printf("Case %lld: %lld\n", i,b);
                    i++;
                }
            }
        }
    }

    return 0;
}
