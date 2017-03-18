#include<stdio.h>

int main(void)
{
    int item[10000],a,b,count,t,sum;
    while(scanf("%d", &count)==1)
    {
        for(a=0;a<count;a++)
        {
            scanf("%d", &item[a]);
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
        printf("Minimum exchange operations : %d\n", sum);
    }

    return 0;
}
