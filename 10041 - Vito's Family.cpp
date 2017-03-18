#include<stdio.h>
#include<stdlib.h>

int cp(void const *p,void const *q);
int arr[10000];
int main(void)
{
    int a,i,sum,qq,test;
    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        scanf("%d", &a);
        for(i=0;i<a;i++) scanf("%d", &arr[i]);
        qsort(arr,a,sizeof(int),cp);
        sum=0;
        int j=a/2;
        for(i=0;i<a;i++)
        {
            sum+=abs(arr[j]-arr[i]);
        }
        printf("%d\n", sum);
    }

    return 0;
}

int cp(void const *p,void const *q)
{
    return *(int *)p-*(int *)q;
}
