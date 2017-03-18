#include<stdio.h>

int main(void)
{
    long long a,c;
    while(scanf("%lld", &a)==1)
    {
        if(a<0)
        {
            break;
        }
        else
        {
            c=((a*(a+1))/2)+1;
            printf("%lld\n", c);
        }
    }

    return 0;
}

