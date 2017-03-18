#include<stdio.h>

int main(void)
{
    int arr[100],i,a,count,sum,prova,b,j;
    scanf("%d", &b);
    for(j=1;j<=b;j++)
    {
        scanf("%d", &a);
        for(i=0;i<a;i++)
        {
            scanf("%d", &arr[i]);
        }
        count=0;
        sum=0;
        prova=0;
        for(i=0;i<a-1;i++)
        {
            if(arr[i]<arr[i+1])
            {
                count++;
            }
            else if(arr[i]>arr[i+1])
            {
                sum++;
            }
            else if(arr[i]==arr[i+1])
            {
                prova++;
            }
        }
        printf("Case %d: %d %d\n", j,count,sum);
    }

    return 0;
}
