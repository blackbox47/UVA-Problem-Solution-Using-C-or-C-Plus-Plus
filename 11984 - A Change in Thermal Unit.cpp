#include<stdio.h>

int main(void)
{
    int q,test;
    double c,f,x,y;
    scanf("%d", &test);
    for(q=1;q<=test;q++)
    {
        scanf("%lf %lf", &c,&f);
        x=((9.0*c)/5.0)+32;
        x=x+f;
        y=((x-32.0)*5.0)/9.0;
        printf("Case %d: %.2lf\n", q,y);
    }

    return 0;
}
