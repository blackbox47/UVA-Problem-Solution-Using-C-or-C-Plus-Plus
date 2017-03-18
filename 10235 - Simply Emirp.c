#include<stdio.h>
#include<string.h>
#include<math.h>

int arr[1000000];
int prime(int a);
int main(void)
{
    long long int a,r,i,flag,fla,q,w,arr[100],count,y,z,n;
    double x;
    while(scanf("%I64d", &y)==1)
    {
        a=y;
        z=prime(a);
        memset(arr,0,sizeof(arr));
        count=1;
        for(i=0; ;i++)
        {
            q=a%10;
            arr[i]=q;
            w=a/10;
            a=w;
            count++;
            if(a<10)
            {
                arr[i+1]=a;
                break;
            }
        }
        r=arr[0]*10+arr[1];
        for(i=0;i<=count-3;i++)
        {
            r=r*10;
            r=arr[i+2]+r;
        }
        printf("sdfffd%d\n", r);
        n=prime(r);
        if(z==1 && y==r) printf("%I64d is prime.\n", y);
        else if(z==1 & n==1) printf("%I64d is emirp.\n", y);
        else if(z==1) printf("%I64d is prime.\n", y);
        else if(z==0) printf("%I64d is not prime.\n", y);
    }

    return 0;
}
int prime(int a)
{
    int i,flag;
    flag=1;
    for(i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            flag=0;
        }
    }

    return flag ;
}














