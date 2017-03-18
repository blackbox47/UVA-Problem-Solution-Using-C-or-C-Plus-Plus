#include<stdio.h>
#include<math.h>
#include<string.h>

int main(void)
{
    char str[10000];
    int d,sum,i,c,len,dig,a,flag,j;
    while(gets(str))
    {
        sum=0;
        dig=0;
        len=strlen(str);
        for(i=0;i<len;i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                c=str[i]-96;
                sum+=c;
            }
            else if(str[i]>='A' && str[i]<='Z')
            {
                d=str[i]-38;
                sum+=d;
            }
        }
        printf("%d\n", sum);
        flag=1;
        for(j=2;j<=sqrt(sum);j++)
        {
            if(sum%j==0)
            {
                flag=0;
            }
        }
        if(flag==1) printf("It is a prime word.\n");
        else printf("It is not a prime word.\n");
    }

    return 0;
}
