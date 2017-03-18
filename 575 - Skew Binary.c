#include<stdio.h>
#include<string.h>
#include<math.h>

 char str[100000000],arr[10000000];
int main(void)
{
    long long int i,len,p,len1,j,r,sum,c,x;
    while(gets(arr))
    {
        x=strcmp(arr,"0");
        if(!x) break;
        memset(str,0,sizeof(str));
        len=strlen(arr);
        for(j=len-1,i=0;j>=0;j--,i++)
        {
            str[i]=arr[j];
        }
        len1=strlen(str);

        sum=0;
        p=1;
        for(i=0;i<len1;i++)
        {
            str[i]=str[i]-48;
            c=(pow(2,p)-1);
            p++;
            r=str[i]*c;
            sum+=r;
        }
        printf("%I64d\n", sum);
    }

    return 0;
}
