#include<stdio.h>

int main(void)
{
    long long int a,c;
    while(scanf("%lld", &a)==1)
    {
        if(a==0) break;
        else if(a%2==0)
        {
            c=a/2;
            printf("%lld\n", c);
        }
        else if(a%2!=0)
        {
            c=((a+1)/2)-1;
            printf("%lld\n", c);
        }
    }

    return 0;
}
