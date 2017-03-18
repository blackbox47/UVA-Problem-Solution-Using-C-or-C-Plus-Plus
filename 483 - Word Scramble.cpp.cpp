#include<stdio.h>
#include<string.h>

char str[100000];
int var;

void reverse(int n,int len);

int main(void)
{
    int i,len,n,re;
    while(gets(str))
    {
        len=strlen(str);
        n=0;
        while(1)
        {
            if(n==len) break;
            if(str[n]==' ')
            {
                printf(" ");
                n++;
            }
            if(str[n]!=' ')
            {
                reverse(n,len);
                n=var;
            }
        }
        printf("\n");
        memset(str,0,sizeof(str));
    }

    return 0;
}

void reverse(int n,int len)
{
    if(len==n || str[n]==' ' )
    {
        var=n;
        return ;
    }
    reverse(n+1,len);
    printf("%c", str[n]);
}
