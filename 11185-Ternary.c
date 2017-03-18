#include<stdio.h>

int main(void)
{
    long long int a,c,d,x,i,arr[100000];
    while(scanf("%lld", &a)==1)
    {
        if(a<0) break;
        for(i=0; ;i++)
        {
            c=a%3;
            arr[i]=c;
            d=a/3;
            a=d;
            x=i;
            if(a<=0) break;
        }
        for(i=x;i>=0;i--)
       {
            printf("%lld", arr[i]);
        }
        printf("\n");
    }

    return 0;
}



