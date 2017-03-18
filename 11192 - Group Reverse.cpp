#include<stdio.h>
#include<string.h>

char str[10000],arr[10000];

int main(void)
{
    int i,j,len,a,tem,var,loop,kl;
    while(scanf("%d", &a)==1)
    {
        if(a==0) break;
        scanf("%s", &str);
        len=strlen(str);
        tem=len/a;
        var=0; loop=1;
        while(1)
        {
            if(var==len) break;
            j=0; kl=0;
            for(i=var;i<tem*loop;i++)
            {
                arr[j]=str[i];
                j++; kl++;
            }
            for(j=kl-1;j>=0;j--) printf("%c", arr[j]);
            var=tem*loop;
            loop++;
        }
        printf("\n");
    }

    return 0;
}
