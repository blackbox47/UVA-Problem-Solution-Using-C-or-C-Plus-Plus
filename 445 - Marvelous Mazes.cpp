#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
    int i,n;
    char c;
    n=0;
    while(scanf("%c", &c)==1)
    {
        if(c=='\n') printf("\n");
        else
        {
            if(c=='!') printf("\n");
            if(c>='0' && c<='9')
            {
                n+=c-48;
            }
            else if( (c>='A' && c<='Z') || c=='b' || c=='*')
            {
                for(i=0;i<n;i++)
                {
                    if(c=='b') printf(" ");
                    else printf("%c", c);
                }
                n=0;
            }
        }
    }

    return 0;
}
