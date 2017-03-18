#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[10000];
    int i;
    i=0;
    while(scanf("%s", str)==1)
    {
        i++;
        int qq=strcmp(str,"#");
        if(qq==0)
        {
            break;
        }
        int p=strcmp(str,"HELLO");
        if(p==0)
        {
            printf("Case %d: ENGLISH\n", i); continue;
        }

        int q=strcmp(str,"HOLA");
        if(q==0)
        {
            printf("Case %d: SPANISH\n", i); continue;
        }

        int r=strcmp(str,"HALLO");
        if(r==0)
        {
            printf("Case %d: GERMAN\n", i); continue;
        }
        int s=strcmp(str,"BONJOUR");
        if(s==0)
        {
            printf("Case %d: FRENCH\n", i); continue;
        }
        int t;
        t=strcmp(str,"CIAO");
        if(t==0)
        {
            printf("Case %d: ITALIAN\n", i); continue;
        }
        int u=strcmp(str,"ZDRAVSTVUJTE");
        if(u==0)
        {
            printf("Case %d: RUSSIAN\n", i); continue;
        }
        else
        {
            printf("Case %d: UNKNOWN\n", i); continue;
        }
    }

    return 0;
}
