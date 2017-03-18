#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

char str[10000];
int binary(int p);
int decbi(int len);
int main(void)
{
    int i,a,q,r,x,y,count,len,n,test;
    scanf("%d", &test);
    while(test--)
    {
        scanf("%s", &str);
        len=strlen(str);
        a=atoi(str);

        q=binary(a);
        r=decbi(len);
        printf("%d %d\n", q,r);
        memset(str,0,sizeof(str));
    }

    return 0;
}

int binary(int p)
{
    int x,y,count;
    count=0;
    for( ; ; )
    {
        x=p%2;
        if(x==1) count++;
        y=p/2;
        p=y;
        if(p==0) break;
    }

    return count;
}

int decbi(int len)
{
    int i,x,y,var,sum;
    var=0;
    x=0;
    for(i=0;i<len;i++) str[i]=str[i]-48;
    for(i=len-1;i>=0;i--)
    {
        x+=str[i]*(int)(pow(16,var));
        var++;
    }
    sum=binary(x);

    return sum;
}
