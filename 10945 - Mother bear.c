#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main(void)
{
    char str[80],arr[80],arr1[80];
    int len,i,j,p,len1,k;
    while( gets(str) )
    {
        memset(arr,0,sizeof(arr));
        if(strcmp(str,"DONE") == 0 )  break;
        for(i=0,j=0;str[i];i++)
        {
            if(isalpha(str[i]))
            {
                str[i]=toupper(str[i]);
                arr[j]=str[i];
                j++;
            }
        }
        printf(arr);
        len=strlen(arr);
        memset(arr1,0,sizeof(arr1));
        for(j=len-1,k=0;j>=0;j--,k++)
        {
            arr1[k]=arr[j];
        }
        p=strcmp(arr,arr1);
        if(p==0) printf("You won't be eaten!\n");
        else printf("Uh oh..\n");
    }

    return 0;
}


