#include<stdio.h>
#include<string.h>

char str[100],arr[100];
int odd[100],ev[100];
int space(void);
int main(void)
{
    int i,j,p,qq,sum,count,x,ans,test,ww;
    char c;
    scanf("%d%c", &test,&c);
    for(ww=1;ww<=test;ww++)
    {
        gets(str);
        p=space();
        j=0; qq=0;
        sum=0;
        for(i=0;i<p;i++)
        {
            if(i%2==0)
            {
                odd[j]=arr[i];
                odd[j]=odd[j]*2;
                j++; qq++;
            }
            else
            {
                sum+=arr[i];
            }
        }
        count=0;
        for(j=0;j<qq;j++)
        {
            x=odd[j]%9;
            if(odd[j]<=9) count+=odd[j];
            else if(x==0) count+=9;
            else count+=x;
        }
        ans=sum+count;
        if(ans%10==0) printf("Valid\n");
        else printf("Invalid\n");
    }

    return 0;
}

int space(void)
{
    int i,len,j,kl;

    len=strlen(str);
    kl=0;
    for(i=0,j=0;i<len;i++)
    {
        if(str[i]!=' ')
        {
            arr[j]=str[i];
            j++; kl++;
        }
    }
    for(j=0;j<kl;j++)
    {
        arr[j]=arr[j]-48;
    }

    return kl;
}
