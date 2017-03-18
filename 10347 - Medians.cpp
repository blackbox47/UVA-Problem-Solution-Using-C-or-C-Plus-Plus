#include<stdio.h>
#include<math.h>

int main(void)
{
    double a,b,c,k;
    while(scanf("%lf %lf %lf", &a,&b,&c)==3)
    {
        if( (a+b)<=c || (b+c)<=a || (c+a)<=b ) printf("-1.000\n");
        else
        {
            k=(a+b+c)/2;
            k=k*(k-a)*(k-b)*(k-c);
            k=sqrt(k);
            k=(4*k)/3;
            printf("%.3lf\n", k);
        }
    }

    return 0;
}
