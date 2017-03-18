#include<stdio.h>
#include<stdlib.h>

long long arr[1000000];
int cp(void const *p,void const *q);
int main(void)
{
    long long i,a;
    while(scanf("%lld", &a)==1)
    {
        if(a<=0) break;
        for(i=0;i<a;i++)
        {
            scanf("%lld", &arr[i]);
        }

        qsort(arr,a,sizeof(long long int), cp);

         for(i=0;i<a;i++)
        {
            if(i==0) printf("%lld", arr[i]);
            else printf(" %lld", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

int cp(void const *p,void const *q)
{
    return *(int *)p-*(int *)q;
}
