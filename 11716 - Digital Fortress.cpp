#include<stdio.h>
#include<math.h>
#include<string.h>

char str[10005];
int main(void)
{
    int i,len,y,j,var,test;
    char c;
    double x;
    scanf("%d%c", &test,&c);
    while(test--)
    {
        gets(str);
        len=strlen(str);
        x=sqrt(len);
        if(x!=(int)x)
        {
            printf("INVALID\n");
        }
        else if(x==(int)x)
        {
            y=(int)x;
            var=0;
            for(j=1;j<=y;j++)
            {
                for(i=var;i<len;)
                {
                    printf("%c", str[i]);
                    i+=y;
                }
                var++;
            }
            printf("\n");
        }
    }

    return 0;
}
