#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cp(void const *p,void const *q);
int cp1(void const *p1,void const *q1);
int main(void)
{
    char str[10000],arr[10000],temp;
    long long int i,j,p,x,q,len,count,qq,q1;
    while(scanf("%s", &str)==1)
    {
        len=strlen(str);
        qsort(str,len,sizeof(char),cp);
        for(i=len-1,j=0;i>=0;i--,j++)
        {
            arr[j]=str[i];
        }
        p=atoll(str);

        count=0;
        for(j=0;j<len;j++)
        {
            if(arr[j]!=arr[j+1])
            {
                count++;
            }
        }

        if(arr[0]=='0')
        {
            for(j=1;j<len;j++)
            {
                if(arr[j]!='0')
                {
                    temp=arr[j];
                    arr[j]=arr[0];
                    arr[0]=temp;
                    break;
                }
            }
            x=atoll(arr);
        }
        else
        {
            qsort(arr,len,sizeof(char),cp1);
            x=atoll(arr);
        }
        qq=p-x;
        q1=qq/9;
        printf("%lld - %lld = %lld = 9 * %lld\n", p,x,qq,q1);

        memset(arr,0,sizeof(arr));
        memset(str,0,sizeof(str));
    }

    return 0;
}

int cp(void const *p,void const *q)
{
    return *(char*)q-*(char *)p;
}

int cp1(void const *p1,void const *q1)
{
    return *(char*)p1-*(char *)q1;
}
