#include<stdio.h>
#include<string.h>

char str[10000000],arr[10000000];
int main(void)
{
    int i,len,len1,j,tok;
    while(scanf("%s", &str)==1)
    {
        len=strlen(str);
        scanf("%s", &arr);
        len1=strlen(arr);
        int p;
        p=strcmp(str,arr);
        tok=0;
        for(i=0;i<len1;i++)
        {
            if(str[tok]==arr[i])
            {
                tok++;
            }
        }
        if(tok==len) printf("Yes\n");
        else printf("No\n");

        memset(arr,0,sizeof(arr));
        memset(str,0,sizeof(str));
    }

    return 0;
}
