#include<stdio.h>

int main(void)
{
    long long int a,b,c,x,i;
    while(scanf("%lld", &x)==1)
    {
        for(i=1;i<=x;i++)
        {
            scanf("%lld %lld %lld", &a,&b,&c);
            if(a==0 || b==0 || c==0) printf("Case %lld: Invalid\n", i);
            else if( (a+b)>c && (a+c)>b && (b+c)>a)
            {
                if(a==b && b==c)
                {
                    printf("Case %lld: Equilateral\n", i);
                }
                else if(a==b || b==c || a==c)
                {
                    printf("Case %lld: Isosceles\n", i);
                }
                else if(a!=b || b!=c || c!=a)
                {
                    printf("Case %lld: Scalene\n", i);
                }
            }
            else printf("Case %lld: Invalid\n", i);
        }
    }
    return 0;
}
