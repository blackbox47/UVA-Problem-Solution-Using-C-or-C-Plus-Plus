#include<stdio.h>
#include<string.h>

char str[1000001];
int main(void)
{
    int i,len,j,flag,a,b,c,ww,max,min;
    char x;
    ww=1;
    while(scanf("%s", &str)==1)
    {
        printf("Case %d:\n", ww);
        len=strlen(str);
        scanf("%d", &a);
        for(j=0;j<a;j++)
        {
            scanf("%d %d", &b,&c);
            if(b>c)
            {
                max=b; min=c;
            }
            else
            {
                max=c; min=b;
            }
            x=str[min];
            flag=0;
            for(i=min;i<=max;i++)
            {
                if(x!=str[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1) printf("No\n");
            else printf("Yes\n");
        }
        ww++;
        memset(str,0,sizeof(str));
    }

    return 0;
}
