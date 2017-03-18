#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

char str[2500];
int arr1[2500];
int arr[128];
int prime(int p);
int cp(void const *x,void const *y);
int main(void)
{
    int ww,i,len,j,a,max,p,k,q,kl,count,test;
    char c;
    scanf("%d%c", &test,&c);
    for(ww=1;ww<=test;ww++)
    {
        gets(str);
        len=strlen(str);
        for(i=0;i<len;i++)
        {
            arr[str[i]]++;
        }
        max=0;
        for(j=48;j<=122;j++)
        {
            if(max<arr[j]) max=arr[j];
        }
        count=0;
        q=0; kl=0;
        printf("Case %d: ", ww);
        for(k=2;k<=max;k++)
        {
            for(j=48;j<=122;j++)
            {
                if(arr[j]==k)
                {
                    p=prime(arr[j]);
                    if(p==2)
                    {
                        arr1[q]=j;
                        q++; kl++;
                        count++;
                    }
                }
            }
        }
        if(count!=0)
        {
            qsort(arr1,kl,sizeof(int),cp);
            for(q=0;q<kl;q++)
            {
                printf("%c", arr1[q]);
            }
            printf("\n");
        }
        else printf("empty\n");
        memset(arr,0,sizeof(arr));
        memset(arr1,0, sizeof(arr1));
        memset(str,0,sizeof(str));
    }

    return 0;
}

int prime(int p)
{
    if(p==1) return 1;
    int flag,i,x,y;
    x=(int)sqrt(p);
    flag=0;
    for(i=2;i<=x;i++)
    {
        y=p%i;
        if(y==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

int cp(void const *x,void const *y)
{
    return *(int *)x-*(int *)y;
}
