#include<stdio.h>

int main(void)
{
    long long int a,b,c,i,x;
    while(scanf("%I64d", &a)==1)
    {
        if(a==0) break;
        b=0;
        c=1;
        for(i=1;i<=a;i++)
        {
            x=b+c;
            b=c;
            c=x;
        }
        printf("%I64d\n", x);
    }
    return 0;
}
