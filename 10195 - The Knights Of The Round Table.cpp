#include<stdio.h>
#include<math.h>

int main(void)
{
//    freopen("qqqqqw.txt","w",stdout);
    double a,b,c,k,ans,s;
    while(scanf("%lf %lf %lf", &a,&b,&c)==3)
    {
        if(a==0.0 && b==0.0 && c==0.0)
        {
            printf("The radius of the round table is: 0.000\n");
            continue;
        }
        k=(a+b+c)/2;
        s=k*(k-a)*(k-b)*(k-c);
        s=sqrt(s);
        ans=s/k;
        printf("The radius of the round table is: %.3lf\n", ans);
    }

    return 0;
}
