#include<stdio.h>
#include<stdlib.h>

int cp(void const *p,void const *q);
int main(void)
{
    int arr[100000],a,x,y,q,p,i;
    int k=0,kl=0;
    while(scanf("%d", &a)==1)
    {
        arr[k]=a;
        k++; kl++;

        qsort(arr,kl,sizeof(int),cp);
        if(kl%2==0)
        {
            x=kl/2;
            y=x-1;
            printf("%d\n", (arr[x]+arr[y])/2);
        }
        else
        {
            x=kl/2;
            printf("%d\n", arr[x]);
        }
    }

    return 0;
}

int cp(void const *p,void const *q)
{
    return *(int *)p-*(int *)q;
}
