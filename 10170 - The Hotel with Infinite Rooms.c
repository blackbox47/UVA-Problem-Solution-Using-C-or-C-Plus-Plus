#include<stdio.h>

int main(void)
{
    long long int a,b,c,i;
    while(scanf("%lld %lld", &a,&b)==2)
    {
        c=0;
        for(i=a; ;i++)
        {
            c+=i;
            if(c>=b) break;
        }
        printf("%lld\n", i);
    }

    return 0;
}
