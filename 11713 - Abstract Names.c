#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[10000],arr[10000];
    int i,len,len1,j,p,a,k;
    scanf("%d", &a);
    for(k=0;k<a;k++)
    {
        scanf("%s", &str);
        scanf("%s", &arr);
        len=strlen(str);
        len1=strlen(arr);
        if(len!=len1)
        {
            printf("No\n");
        }
        else if(len==len1)
        {
            for(i=0;i<len;i++)
            {
                if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
                {
                    str[i]='1';
                }
            }
            for(j=0;j<len;j++)
            {
                if(arr[j]=='a'||arr[j]=='e'||arr[j]=='i'||arr[j]=='o'||arr[j]=='u')
                {
                    arr[j]='1';
                }
            }
            p=strcmp(str,arr);
            if(!p) printf("Yes\n");
            else printf("No\n");
        }
    }

    return 0;
}
