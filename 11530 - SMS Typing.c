#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
    char str[200];
    int i,len,c,count,x,j;
    char qqq;
    scanf("%d%c", &x,&qqq);
    {
        for(j=1;j<=x;j++)
        {
            gets(str);
            len=strlen(str);
            count=0;
            for(i=0;i<len;i++)
            {
                str[i]=toupper(str[i]);
                if(str[i]=='A'||str[i]=='D'||str[i]=='G'||str[i]=='J'||str[i]=='M'||str[i]=='P'||str[i]=='T'||str[i]=='W'||str[i]==' ')
                {
                    count+=1;
                }
                else if(str[i]=='B'||str[i]=='E'||str[i]=='H'||str[i]=='K'||str[i]=='N'||str[i]=='Q'||str[i]=='U'||str[i]=='X')
                {
                    count+=2;
                }
                else if(str[i]=='C'||str[i]=='F'||str[i]=='I'||str[i]=='L'||str[i]=='O'||str[i]=='R'||str[i]=='V'||str[i]=='Y')
                {
                    count+=3;
                }
                else if(str[i]=='S'||str[i]=='Z')
                {
                    count+=4;
                }
            }
            printf("Case #%d: %d\n", j,count);
        }
    }

    return 0;
}
