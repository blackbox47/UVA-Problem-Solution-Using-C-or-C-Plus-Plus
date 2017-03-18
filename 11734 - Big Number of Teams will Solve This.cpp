#include<stdio.h>
#include<string.h>

char str[30],arr[30],tem[30];
int main(void)
{
    int i,j,p,q,len,len1,test,qq;
    char c;
    scanf("%d%c", &test,&c);
    for(qq=1;qq<=test;qq++)
    {
        gets(str); gets(arr);
        len=strlen(str);
        p=strcmp(str,arr);
        if(p==0) printf("Case %d: Yes\n", qq);
        else
        {
            j=0;
            for(i=0,j;i<len;i++)
            {
                if(str[i]!=' ')
                {
                    tem[j]=str[i];
                    j++;
                }
            }
            len1=strlen(tem);
            q=strcmp(tem,arr);
            if(q==0) printf("Case %d: Output Format Error\n", qq);
            else printf("Case %d: Wrong Answer\n", qq);
        }
        memset(arr,0,sizeof(arr));
        memset(str,0,sizeof(str));
        memset(tem,0,sizeof(tem));
    }

    return 0;
}
