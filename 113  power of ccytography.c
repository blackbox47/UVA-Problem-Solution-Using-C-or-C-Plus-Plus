#include<stdio.h>
#include<math.h>

int main(void)
{
    double c,a,q,x;
    while(scanf("%lf %lf", &a,&c)==2)
    {
        x=(1.0/a);
        q=pow(c,x);
        printf("%0.0lf\n", q);
    }

    return 0;
}
