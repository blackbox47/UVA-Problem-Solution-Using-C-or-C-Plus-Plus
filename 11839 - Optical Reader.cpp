#include<stdio.h>

int arr[10];

int main(void)
{
    int n,i,j,var;
    while(scanf("%d", &n)==1)
    {
        if(n==0) break;
        for(i=0;i<n;i++)
        {
            for(j=0;j<5;j++) scanf("%d", &arr[j]);
            int cnt=0;
            for(j=0;j<5;j++)
            {
                if(arr[j]<=127)
                {
                    var=j;
                    cnt++;
                }
            }
            if(cnt==1)
            {
                printf("%c\n", var+65);
            }
            else printf("*\n");
        }
    }

    return 0;
}
