#include<stdio.h>

int arr[5];
int main(void)
{
    int a,i,flag,test,qq;
    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        for(i=0;i<3;i++) scanf("%d", &arr[i]);
        flag=1;
        for(i=0;i<3;i++)
        {
            if(arr[i]>20) flag=0;

        }
        if(flag==0) printf("Case %d: bad\n", qq);
        else printf("Case %d: good\n", qq);
    }

    return 0;
}
