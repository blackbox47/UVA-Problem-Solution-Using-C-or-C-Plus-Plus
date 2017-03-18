#include<stdio.h>
#include<stdlib.h>

int cp(void const *x,void const *y);
int cp1(void const *x,void const *y);

int main(void)
{
//    freopen("rajib.txt","w",stdout);
    int a,arr[1000],str[1000],i,j,flag,fla,k;
    scanf("%d", &a);
    printf("Lumberjacks:\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<10;j++) scanf("%d", &str[j]);
        for(j=0,k=0;j<10;j++,k++) arr[k]=str[j];

        qsort(arr,10,sizeof(int),cp);
        flag=0;
        for(j=0,k=0;j<10;j++,k++)
        {
            if(str[j]!=arr[k]) flag=1;
        }
        if(flag==0)
        {
            printf("Ordered\n");
            continue;
        }
        else if(flag==1)
        {
            qsort(arr,10,sizeof(int),cp1);
            fla=0;
            for(j=0,k=0;j<10;j++,k++)
            {
                if(str[j]!=arr[k]) fla=1;
            }
            if(fla==0)
            {
                 printf("Ordered\n");
                 continue;
            }
        }
        if(flag==1 && fla==1) printf("Unordered\n");
    }

    return 0;
}

int cp(void const *x,void const *y)
{
    return *(int *)x-*(int *)y;
}

int cp1(void const *x,void const *y)
{
    return *(int *)y-*(int *)x;
}
