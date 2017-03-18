#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char str[10000],arr[10000];
int cp(void const *x,void const *y);

int main(void)
{
    int i,j,len,len1,k,kl;
    char ans[10000],result[10000];

    memset(ans,0,sizeof(ans));
    memset(result,0,sizeof(result));

    while(gets(str))
    {
        len=strlen(str);
        gets(arr);
        len1=strlen(arr);

        int max;
        if(len>=len1) max=len;
        else max=len1;

        k=0; kl=0;
        for(i=0;i<max;i++)
        {
            for(j=0;j<max;j++)
            {
                if(arr[i]==str[j])
                {
                    str[j]=1;
                    ans[k]=arr[i];
                    k++; kl++;
                    break;
                }
            }
        }
        int q=0, w=0;
        for(k=0;k<kl;k++)
        {
            if(ans[k]!=' ')
            {
                result[q]=ans[k];
                q++; w++;
            }
        }

        qsort(result,w,sizeof(char),cp);

        for(q=0;q<w;q++)
        {
            printf("%c", result[q]);
        }
        printf("");
        printf("\n");
        memset(arr,0,sizeof(arr));
        memset(str,0,sizeof(str));
        memset(ans,0,sizeof(ans));
        memset(result,0,sizeof(result));
    }

    return 0;
}

int cp(void const *x,void const *y)
{
    return *(char *)x - *(char *)y;
}
