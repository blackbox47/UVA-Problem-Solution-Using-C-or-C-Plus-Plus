#include<stdio.h>
#include<math.h>

int main(void)
{
    int j,v,i,a,c,o,d,b,x,y,w,sum;
    while(scanf("%d", &w)==1)
    {
        o=1;
        for(v=1;v<=w;v++)
        {
            scanf("%d", &a);
            b=a;
            for(j=1;;j++)
            {
                sum=0;
                for(i=0;;i++)
                {
                    c=b%10;
                    x=c*c;
                    d=b/10;
                    b=d;
                    sum+=x;
                    if(b<10)
                    {
                        y=b*b;
                        break;
                    }
                }
                b=sum+y;
                if(b<10)
                {
                    break;
                }
            }
            if(b==1) printf("Case #%d: %d is a Happy number.\n", o,a);
            else printf("Case #%d: %d is an Unhappy number.\n", o,a);
            o++;
        }
    }

    return 0;
}
