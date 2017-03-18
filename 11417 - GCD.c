#include<stdio.h>

int GCD(int a,int b);
int main(void)
{
    int a,b,i,g,j;
    while(scanf("%d", &a)==1)
    {
        if(a==0) break;
        g=0;
        for(i=1;i<a;i++)
        {
            for(j=i+1;j<=a;j++)
            {
                g+=GCD(i,j);
            }
        }
        printf("%d\n", g);
    }

    return 0;
}
int GCD(int a,int b)
{
    int d,i,tem;
    for(i=1; ;i++)
    {
        d=b%a;
        if(d==0)
        {
            break;
        }
        tem=a;
        a=d;
        b=tem;
    }

    return a;
}

