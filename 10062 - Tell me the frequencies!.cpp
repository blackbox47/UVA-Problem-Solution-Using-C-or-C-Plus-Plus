#include<stdio.h>
#include<string.h>

int arr[125];
char str[1005];
int main(void)
{
//    freopen("Tell.txt","w",stdout);
    int i,j,len,max;
    bool flag=0;
    while(gets(str))
    {
        len=strlen(str);
        for(i=0;i<len;i++)
        {
            arr[str[i]]++;
        }
        max=0;
        for(j=127;j>=32;j--)
        {
            if(arr[j]>max) max=arr[j];
        }


        if(flag==1) printf("\n");
        for(i=1;i<=max;i++)
        {
            for(j=127;j>=32;j--)
            {
                if(arr[j]==i) printf("%d %d\n", j,i);
            }
        }
        flag=1;
        memset(arr,0,sizeof(arr));
        memset(str,0,sizeof(str));
    }

    return 0;
}
