#include<stdio.h>

int main(void)
{
    int v,t,s;
    while(scanf("%d %d", &v,&t)==2)
    {
         s=2*v*t;
         printf("%d\n", s);
    }

    return 0;
}
