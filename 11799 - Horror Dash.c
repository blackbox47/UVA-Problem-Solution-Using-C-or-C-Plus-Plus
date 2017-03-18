#include<stdio.h>
#include<stdlib.h>

long long arr[10000000];
int cp(void const *p,void const *q);
int main(void)
{
    long long  i,b,d,j;
    while(scanf("%lld", &d)==1)
    {
        for(j=1;j<=d;j++)
        {
            scanf("%lld", &b);
            for(i=0;i<b;i++)
            {
                scanf("%lld", &arr[i]);
            }
            qsort(arr,b,sizeof(long long),cp );

            printf("Case %lld: %lld\n", j,arr[0] );
        }
    }

    return 0;
}

int cp(void const *p,void const *q)
{
    return *(int *)q-*(int *)p;
}
