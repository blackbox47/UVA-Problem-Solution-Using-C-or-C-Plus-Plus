#include<stdio.h>

int main(void)
{
    long long int a,b,c,i,x,d,count;
    while(scanf("%I64d %I64d", &a,&b)==2)
    {
        x=a;
        count=x;
        while(x>=b)
        {
            c=x/b;
            count+=c;
            d=x%b;
            x=c+d;
        }
        printf("%I64d\n", count);
    }

    return 0;
}

