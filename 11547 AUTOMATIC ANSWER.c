#include<stdio.h>

int main(void)
{
    int i;
    int c,d,e,a,b,p,q,w,s,t,x;
    while(scanf("%d", &a)==1)
    {
        for(i=1;i<=a;i++)
        {
            scanf("%d", &b);
            c=b*567,
            d=c/9;
            e=d+7492;
            p=e*235;
            q=p/47;
            w=q-498;

            t=w%10;
            s=w/10;
            w=s;
            x=w%10;
            if(x<0) x=x*(-1);
            printf("%d\n", x);
        }
    }

    return 0;
}
