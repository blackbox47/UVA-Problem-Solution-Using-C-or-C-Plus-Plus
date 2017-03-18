#include<stdio.h>
#include<string.h>

int main(void)
{
    long long int q,a,y,x,b,i,d,c,arr[100000],j,str[100000],qq,count;
    while(scanf("%lld", &a)==1)
    {
        if(a==0) break;
        b=a;
        q=0;
        memset(arr,0,sizeof(arr));
        memset(str,0,sizeof(str));
        for(i=0; ;i++)
        {
            c=b%2;
            arr[i]=c;
            d=b/2;
            b=d;
            q++;
            if(b==0)
            {
                break;
            }
        }
        qq=0;
        printf("The parity of ");
        for(i=q-1,j=0;i>=0;i--,j++)
        {
            str[j]=arr[i];
            qq++;
            printf("%lld", str[j]);
        }
        count=0;
        for(j=0;j<qq;j++)
        {
            if(str[j]==1)
            {
                count++;
            }
        }
        printf(" is %lld (mod 2).\n", count);
    }

    return 0;
}
