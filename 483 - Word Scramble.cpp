#include<stdio.h>
#include<string.h>

char str[100000],arr[100000];
void reverse(char arr[]);
int count(void);
void lastword(void);

int main(void)
{
    char c;
    int i,len,len1,j,kl,test,qq,p;
    while(gets(str))
    {
        len=strlen(str);
        j=0;
        memset(arr,0,sizeof(arr));
        p=count();

        if(p==0)
        {
            for(i=len-1;i>=0;i--)
            {
                printf("%c", str[i]);
            }
            printf("\n");
        }
        else
        {
            for(i=0;i<len;i++)
            {
                if(str[i]!=' ')
                {
                    arr[j]=str[i];
                    j++;
                }
                else if(str[i]==' ')
                {
                    reverse(arr);
                    printf(" ");
                    memset(arr,0,sizeof(arr));
                    j=0;
                }
            }
            lastword();
        }
    }

    return 0;
}

void reverse(char arr[])
{
    int len,i;
    len=strlen(arr);
    for(i=len-1;i>=0;i--) printf("%c", arr[i]);

    return ;
}

int count(void)
{
    int len,i,var,flag;
    len=strlen(str);
    flag=0;
    for(i=0;i<len;i++)
    {
        if(str[i]==' ')
        {
            var=i;
            flag=1;
        }
    }

    return flag;
}

void lastword(void)
{
    int len,i,var,count;
    len=strlen(str);
    count=0;
    for(i=0;i<len;i++)
    {
        if(str[i]==' ')
        {
            var=i;
            count++;
        }
    }

    for(i=len-1;i>=var+1;i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    return ;
}










