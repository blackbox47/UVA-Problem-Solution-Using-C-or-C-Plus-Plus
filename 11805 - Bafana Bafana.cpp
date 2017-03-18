#include<stdio.h>

int main(void)
{
    int n,k,q,p,i,count,test;
    scanf("%d", &test);
    {
        for(q=1;q<=test;q++)
        {
            scanf("%d %d %d", &n,&k,&p);
            if(k>n) k=k-n;
            for(i=1;i<=p;i++)
            {
                k++;
                if(k>n) k=1;
            }
            printf("Case %d: %d\n", q,k);
        }
    }

    return 0;
}
