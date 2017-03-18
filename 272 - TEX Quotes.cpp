#include<stdio.h>
#include<string.h>

char str[100000];
int main(void)
{
//    freopen("strinf.txt","w",stdout);
    int i,j,len,flag;
    flag=0;
    while(gets(str))
    {
        len=strlen(str);
        for(i=0;i<len;i++)
        {
            if(str[i]=='"' && flag==0)
            {
                flag=1;
                printf("``");
            }
            else if(str[i]=='"' && flag==1)
            {
                flag=0;
                printf("''");

            }
            else printf("%c", str[i]);
        }
        printf("\n");
//        printf("%d\n", flag);
    }

    return 0;
}
