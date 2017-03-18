#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char str[10000],arr[10000],tem[100];
void one(void);
void two(void);
int main(void)
{
    int i,len;
    while(gets(str))
    {
        len=strlen(str);
        if(str[0]>='0' && str[0]<='9') one();
        else two();
    }
    return 0;
}

void one(void)
{
    int i,len,j,k,kl,p,x,q,var,w,ww,var1;

    len=strlen(str);
    for(i=len-1,j=0;i>=0;i--,j++)
    {
        arr[j]=str[i];
    }
    var=0;
    kl=0;
    for( ; ; )
    {
        if(kl==len) break;
        k=0;
        for(j=var;j<var+2;j++)
        {
            tem[k]=arr[j];
            k++; kl++;
        }
        p=atoi(tem);
        if(p<32)
        {
            tem[k]=arr[var+2];
            kl++;
            p=atoi(tem);
        }
        printf("%c", p);
        var=kl;
        memset(tem,0,sizeof(tem));
    }

    printf("\n");

    return ;
}

void two(void)
{
    int j,i,len,p,xyz[1000],k,kl,x,y,z;
    len=strlen(str);
    k=0; kl=0;
    for(i=0;i<len;i++)
    {
        p=(int)str[i];
        if(p<100)
        {
            x=p/10;
            xyz[k]=x;
            k++; kl++;
            y=p%10;
            xyz[k]=y;
            k++; kl++;
        }
        if(p>=100)
        {
            x=p/100;
            xyz[k]=x;
            k++; kl++;
            x=p-100;
            x=x/10;
            xyz[k]=x;
            k++; kl++;
            y=p%10;
            xyz[k]=y;
            k++; kl++;
        }
    }
    for(k=kl-1;k>=0;k--)
    {
        printf("%d", xyz[k]);
    }
    printf("\n");

    return ;
}
