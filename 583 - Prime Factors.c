#include<stdio.h>
#include<math.h>

int main(void)
{
    long long int a,i;
    while(scanf("%lld", &a)==1)
    {
        if(a==0) break;
        if(a==1)
        {
            printf("1 = 1\n");
            continue;
        }
        else if(a==-1)
        {
            printf("-1 = -1\n");
            continue;
        }
        if(a>0)printf("%lld =", a);
        else if(a<0)
        {
            printf("%lld = -1 x", a);
            a=(-1)*a;
        }
        for(i=2;i<=sqrt(a);i++)
        {
            if(a%i==0)
            {
                printf(" %lld x", i);
                a=a/i;
                i=1;
            }
        }
        printf(" %lld\n", a);
    }

    return 0;
}
