#include<stdio.h>
#include<string.h>
#define max 10000000

char str[max],arr[max],com[max];
int main(void)
{
    int i,j,len,len1,var,k,kl;
    while(scanf("%s", &str)==1)
    {
        len=strlen(str);
        scanf("%s", &arr);
        len1=strlen(arr);
        var=0;
        k=0; kl=0;
        for(i=0;i<len;i++)
        {
            for(j=var;j<len1;j++)
            {
                if(str[i]==arr[j])
                {
                    var=j;
                    com[k]=arr[j];
                    k++; kl++;
                    break;
                }
            }
            var=var+1;
        }
        int p=(strcmp(com,str));
        if(p==0) printf("Yes\n");
        else printf("No\n");
        memset(arr,0,sizeof(arr));
        memset(str,0,sizeof(str));
        memset(com,0,sizeof(com));
    }

    return 0;
}
