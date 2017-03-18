#include<stdio.h>
#include<string.h>

char str[10000000];
int arr[130];
int main(void)
{
    int i,len,j,max;
    while(gets(str))
    {
        len=strlen(str);
        for(i=0;i<len;i++)
        {
            arr[str[i]]++;
        }
        max=0;
        for(j='A';j<='z';j++)
        {
            if(max<arr[j]) max=arr[j];
        }
        for(j='A';j<='z';j++)
        {
            if(max==arr[j]) printf("%c", j);
        }
        printf(" %d\n", max);
        memset(str,0,sizeof(str));
        memset(arr,0,sizeof(arr));
    }

    return 0;
}
