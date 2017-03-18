#include<stdio.h>

int main(void)
{
    long long int c,d,a,b,x,i;
    while(scanf("%lld", &x)==1)
    {
        for(i=1;i<=x;i++)
        {
            scanf("%lld %lld", &c,&d);
            if(c==0 && d==0)
            {
                printf("0 0\n");
            }
            else if(c==d)
            {
                printf("impossible\n");
            }
            else if(c>d)
            {
                a=(c+d)/2;
                b=c-a;
                if( (a+b)==c && (a-b==d))
                printf("%lld %lld\n", a,b);
                else printf("impossible\n");
            }
            else if(d>c)
            {
                printf("impossible\n");
            }
        }
    }

    return 0;
}

