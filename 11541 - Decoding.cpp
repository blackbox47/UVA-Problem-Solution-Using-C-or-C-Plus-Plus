#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define mx 1000

 char str[mx],ctem[mx],ntem[mx];
 void sett(void);
 int main(void)
 {
    int i,j,len,k,kl,qq,q,len1,p,x,test,ww;
    char c;
    scanf("%d%c", &test,&c);
    for(ww=1;ww<=test;ww++)
    {
        scanf("%s", &str);
        len=strlen(str);
        str[len]='.';
        k=0; kl=0;
        q=0; qq=0;
        len1=strlen(str);
        printf("Case %d: ", ww);
        for(i=0;i<len1;i++)
        {
            if( (str[i]>='A' && str[i]<='Z') || str[i]=='.')
            {
                if(i>0)
                {
                    p=atoi(ntem);
                    for(x=0;x<p;x++)
                    {
                        for(k=0;k<kl;k++)
                        {
                            printf("%c", ctem[k]);
                        }
                    }
                }
                memset(ctem,0,sizeof(ctem));
                memset(ntem,0,sizeof(ntem));
                k=0; kl=0;
                q=0; qq=0;
                ctem[k]=str[i];
                k++; kl++;
            }
            else if(str[i]>='0' && str[i]<='9')
            {
                ntem[q]=str[i];
                q++; qq++;

            }
        }
        printf("\n");
        sett();
    }

    return 0;
 }

void sett(void)
{
    memset(str,0,sizeof(str));
    memset(ctem,0,sizeof(ctem));
    memset(ntem,0,sizeof(ntem));

    return ;
}
