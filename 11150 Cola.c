#include<stdio.h>

int main(void)
{
    int n,b,c;
    while(scanf("%d", &n)==1)
    {
        if(n<0 || n>200)
        {
            break;
        }
        else
        {
            if(n%2==0)
            {
                b=(n/2)*(1+2);
                printf("%d\n", b);
            }
            else
            {
                c=(((n+1)/2)*(1+2))-2;
                printf("%d\n", c);
            }
        }
    }

    return 0;
}
