#include<stdio.h>

int main(void)
{
    long long int a,b,i,count,max,x;
    int flag;
    while(scanf("%I64d %I64d", &a,&b)==2)
    {
        flag=1;
        if(a>b)
        {
           a^=b^=a^=b;
           flag=0;
        }
        max=0;
        for(i=a;i<=b;i++)
        {
            x=i;
            count=1;
            for(; ;)
            {
                if(x==1) break;
                else if(x%2==0)
                {
                    x=x/2;
                    count++;
                }
                else if(x%2!=0)
                {
                    x=3*x+1;
                    count++;
                }
            }
            if(max<count)
            {
                max=count;
            }
        }
     if(flag==0) printf("%I64d %I64d %I64d\n", b,a,max);
     else printf("%I64d %I64d %I64d\n", a,b,max);
    }

    return 0;
}

