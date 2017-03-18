#include<stdio.h>

int main(void)
{
    int item[10000];
    long long a,b,count,t,sum,x,i;
    while(scanf("%lld", &x)==1)
    {
        for(i=1;i<=x;i++)
        {
            scanf("%lld", &count);
            for(a=0;a<count;a++)
            {
                scanf("%lld", &item[a]);
            }
            sum=0;
            for(a=1;a<count;a++)
            {
                for(b=count-1;b>=a;b--)
                {
                    if(item[b-1]>item[b])
                    {
                        t=item[b-1];
                        item[b-1]=item[b];
                        item[b]=t;
                        sum++;
                    }
                }
            }
            printf("Optimal train swapping takes %lld swaps.\n", sum);
        }
    }

    return 0;
}

