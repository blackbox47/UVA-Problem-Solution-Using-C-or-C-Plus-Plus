#include<stdio.h>
#include<math.h>

int main(void)
{
    long long int a;
    double d;
    while(scanf("%lld", &a)==1)
    {
        if(a==0) break;
        d=sqrt(a);
        if( (d-(int)d)==0)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }

    return 0;
}

