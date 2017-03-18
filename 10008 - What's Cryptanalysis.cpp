#include<stdio.h>
#include<string.h>
#include<ctype.h>

char str[10000000];
int arr[128];
int main(void)
{
    int q,i,len,j,max,a,var,k;
    char c;
    while(scanf("%d%c", &a,&c)==2)
    {
        for(q=0;q<a;q++)
        {
            gets(str);
            len=strlen(str);
            for(i=0;i<len;i++) str[i]=toupper(str[i]);
            for(i=0;i<len;i++)
            {
                arr[str[i]]++;
            }
        }

        max=0;
        for(j='A';j<='Z';j++)
        {
            if(max<arr[j]) max=arr[j];
        }

        var=max;

        for(k=max;k>=1;k--)
        {
            for(j='A';j<='Z';j++)
            {
                if(arr[j]==var) printf("%c %d\n", j,arr[j]);
            }
            var--;

        }
        memset(str,0,sizeof(str));
        memset(arr,0,sizeof(arr));
    }

    return 0;
}
