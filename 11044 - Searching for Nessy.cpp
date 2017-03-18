#include<stdio.h>

int main(void)
{
    int n,m,x,y,test,i;
    scanf("%d", &test);
    for(i=1;i<=test;i++)
    {
        scanf("%d %d", &n,&m);
        x=n/3;
        y=m/3;
        x=x*y;
        printf("%d\n", x);
    }

    return 0;
}
