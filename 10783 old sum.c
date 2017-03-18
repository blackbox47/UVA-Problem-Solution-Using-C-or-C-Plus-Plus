#include<stdio.h>

int main(void)
{
    int a,i,b,sum,t,j,cas;
    while(scanf("%d", &t)==1)
    {
        cas=1;
        for(j=1;j<=t;j++)
        {
            scanf("%d", &a);
            scanf("%d", &b);
            if(b<a ||a<0 ||b>101)  break;
            else
            {
                sum=0;
                for(i=a;i<=b;i++)
                {
                    if(i%2==0)
                    {
                        continue;
                    }
                    sum+=i;
                }
                printf("Case %d: %d\n", cas,sum);
                cas++;
            }
        }
    }
    return 0;
}
