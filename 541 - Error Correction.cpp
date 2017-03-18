#include<stdio.h>
#include<string.h>
#define max 105

int arr[max][max];
int count[100],count1[100];
int main(void)
{
    int a,i,j;
    while(scanf("%d", &a)==1)
    {
        if(a==0) break;

        for(i=0;i<a;i++)
        {
            for(j=0;j<a;j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

    /// row

        int sum=0,k,kl;
        k=0; kl=0;
        for(i=0;i<a;i++)
        {
            for(j=0;j<a;j++)
            {
                sum+=arr[i][j];
            }
            if(sum%2!=0)
            {
                count[k]=i;
                k++; kl++;
            }
            sum=0;
        }

    /// coloum

        int sum1=0;
        int w=0,ww=0;
        for(j=0;j<a;j++)
        {
            for(i=0;i<a;i++)
            {
                sum1+=arr[i][j];
            }
            if(sum1%2!=0)
            {
                count1[w]=j;
                w++; ww++;
            }
            sum1=0;
        }

        if(ww==0 && kl==0) printf("OK\n");
        else if(ww==1 && kl==1) printf("Change bit (%d,%d)\n", count[0]+1,count1[0]+1);
        else printf("Corrupt\n");
        memset(arr,0,sizeof(arr));
        memset(count,0,sizeof(count));
        memset(count1,0,sizeof(count1));
    }

    return 0;
}
