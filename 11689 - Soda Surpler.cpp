#include<stdio.h>

int main(void)
{
    int i,j,a,b,p,x,y,count,test,qq,c;
    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        scanf("%d %d %d", &a,&b,&c);
        count=0;
        p=a+b;
        for(i=0; ;i++)
        {
    //        printf("%d ", a);
            x=p/c;
    //        printf("%d\n", x);
            count+=x;
            if(x==0) break;
            y=p%c;
            p=x+y;
        }
        printf("%d\n", count);
    }

    return 0;
}
