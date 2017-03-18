#include<stdio.h>
#include<string.h>

char str[10],one[]="one",two[]="two";

int main(void)
{
    int i,j,test,qq,len,count;

    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        scanf("%s", &str);
        len=strlen(str);

        if(strcmp(str,"one")==0) {printf("1\n"); continue;}
        if(strcmp(str,"two")==0) {printf("2\n"); continue;}
        if(strcmp(str,"three")==0) {printf("3\n"); continue;}

        if(len==5) printf("3\n");
        else if(len==3)
        {
            count=0;
            for(i=0,j=0;i<len;i++,j++)
            {
                if(str[i]!=one[j]) count++;
            }
            if(count==1) printf("1\n");
            else printf("2\n");
        }
        memset(str,0,sizeof(str));
    }

    return 0;
}
