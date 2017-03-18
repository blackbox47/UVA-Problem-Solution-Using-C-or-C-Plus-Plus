#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[1000000],w;
    int i,count,len;
    while(scanf(" %[^\n]",&str) == 1)
    {
        w=' ';
        len=strlen(str);
        count=0;
        for(i=0;i<len;i++)
        {
            if( (str[i]>='a' && str[i]<='z') || (str[i]>='A'&&str[i]<='Z') )
            {
                if( !((w>='a' && w<='z') || (w>='A'&&w<='Z')) )
                {
                    count++;
                }
            }
            w=str[i];
        }
        printf("%d\n", count);
    }
        return 0;
}
