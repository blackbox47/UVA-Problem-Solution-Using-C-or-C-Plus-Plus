#include<stdio.h>

int arr[10000000];
int main(void)
{
    int a,i,count,sum,c,avg,j;
    j=0;
    while(scanf("%d", &a)==1)
    {
        if(a==0) break;
        sum=0;
        for(i=0;i<a;i++)
        {
            scanf("%d", &arr[i]);
            sum+=arr[i];
        }
        avg=sum/a;
        c=0;
        for(i=0;i<a;i++)
        {
            if(arr[i]<avg)
            {
                count=avg-arr[i];
                c+=count;
            }
        }
        j++;
        printf("Set #%d\n", j);
        printf("The minimum number of moves is %d.\n\n", c);
    }

    return 0;
}
