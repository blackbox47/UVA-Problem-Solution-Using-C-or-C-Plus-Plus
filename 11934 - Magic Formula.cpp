#include<stdio.h>

int main(void)
{
    int a,b,c,l,i,count;
    double d,f,x;
    while(scanf("%d %d %d %lf %d", &a,&b,&c,&d,&l)==5)
    {
        if(a==0 && b==0 && c==0 && d==0.0 && l==0) break;
        count=0;
        for(i=0;i<=l;i++)
        {
            f=a*(i*i)+b*i+c;
            x=f/d;
            if(x==(int)x) count++;
        }
        printf("%d\n", count);
    }

    return 0;
}
