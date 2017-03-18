#include<stdio.h>
#include<stdlib.h>

int arr[100000];
int cp(void const *p,void const *q);
int captain(int arr[],int a);
int main(void)
{
    int a,i,test,j,pp;
    scanf("%d", &test);
    for(j=1;j<=test;j++)
    {
        scanf("%d", &a);
        for(i=0;i<a;i++) scanf("%d", &arr[i]);

        qsort(arr,a,sizeof(int),cp);

        pp=captain(arr,a);

        printf("Case %d: %d\n", j,arr[pp]);
    }

    return 0;
}

int captain(int arr[],int a)
{
    int i,x;
    x=(1+a)/2;
    x=x-1;

    return x;
}

int cp(void const *p,void const *q)
{
    return *(int *)p-*(int *)q;
}
