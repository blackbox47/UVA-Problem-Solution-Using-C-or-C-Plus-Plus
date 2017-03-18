#include<stdio.h>
#include<math.h>

int main(void)
{
    double u,s,t,a,v;
    int x;
    x=0;
    while(scanf("%lf", &a)==1)
    {
        x++;
        if(a==0) break;
        else if(a==1)
        {
            scanf("%lf %lf %lf", &u,&v,&t);
            a=(v-u)/t;
            s=(u*t)+(a*t*t*0.5);
            printf("Case %d: %.3lf %.3lf", x,s,a);
        }
        else if(a==2)
        {
            scanf("%lf %lf %lf", &u,&v,&a);
            t=(v-u)/a;
            s=(u*t)+(a*t*t*0.5);
            printf("Case %d: %.3lf %.3lf", x,s,t);
        }
        else if(a==3)
        {
            scanf("%lf %lf %lf", &u,&a,&s);
            v=(u*u)+(2*a*s);
            v=sqrt(v);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf", x,v,t);
        }
        else if(a==4)
        {
            scanf("%lf %lf %lf", &v,&a,&s);
            u=(v*v)-2*a*s;
            u=sqrt(u);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf", x,u,t);
        }
    }

  return 0;
}
