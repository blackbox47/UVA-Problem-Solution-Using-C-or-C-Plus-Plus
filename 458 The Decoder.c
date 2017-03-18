#include<stdio.h>
#include<ctype.h>

int main(void)
{
    char ch,c;
    while(scanf("%c", &ch)==1)
    {
        if(ch=='\n') printf("\n");
        else
        {
            c=ch-7;
            printf("%c", c);
        }
    }

    return 0;
}
