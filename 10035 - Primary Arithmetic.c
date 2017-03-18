#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[1000],arr[1000],ra[1000],rr[1000],str1[1000],arr1[1000];
    int i,len,len1,carry,max,j,count,p,x;
    memset(str,0,sizeof(str));
    while(scanf("%s", &str)==1)
    {
        memset(ra,0,sizeof(ra));
        memset(rr,0,sizeof(rr));
        memset(str1,0,sizeof(str1));
        memset(arr1,0,sizeof(arr1));
        memset(arr,0,sizeof(arr));
        len=strlen(str);
        scanf("%s", &arr);
        len1=strlen(arr);
        p=strcmp(str,"0");
        x=strcmp(arr,"0");

        if( !p && !x) break;

        for(i=0;i<len;i++)
        {
            str[i]=str[i]-48;
        }
        for(i=0;i<len1;i++)
        {
            arr[i]=arr[i]-48;
        }
        for(i=len-1,j=0;i>=0;i--,j++)
        {
            str1[j]=str[i];
        }

        for(i=len1-1,j=0;i>=0;i--,j++)
        {
            arr1[j]=arr[i];
        }

        if(len>len1) max=len;
        else if(len1>len) max=len1;
        else max=len;
        carry=0;
        count=0;
        for(i=0;i<max;i++)
        {
            ra[i]=str1[i]+arr1[i]+carry;
            if(ra[i]>9)
            {
                carry=1;
                count++;
            }
            else carry=0;
            if(i==max-1)
            {
                rr[i]=ra[i];
            }
            else if(ra[i]>9)
            {
                rr[i]=ra[i]-10;
            }

            else
            {
                rr[i]=ra[i];
            }
        }
        if(count==0)
        {
            printf("No carry operation.\n", count);
        }
        else if(count==1)
        {
            printf("1 carry operation.\n");
        }
        else
        {
            printf("%d carry operations.\n", count);
        }
        memset(str,0,sizeof(str));
    }

    return 0;
}
