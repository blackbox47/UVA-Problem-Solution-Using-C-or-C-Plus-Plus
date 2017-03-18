#include<stdio.h>
#include<math.h>

int main(void)
{
    int a,i,count,x,y,z,j,tem,b,max,maxvar,test,qq;
    scanf("%d", &test);
    for(qq=0;qq<=test;qq++)
    {
        scanf("%d %d", &a,&b);
        y=a; z=b;
        max=0; maxvar=0;
        for(j=y;j<=z;j++)
        {
            x=(int)sqrt(j);
            tem=x;
            count=0;
            for(i=1;i<=x;i++)
            {
                if(j/i==sqrt(j)) count++;
                else if(j%i==0) count+=2;
            }
            if(max<count)
            {
                max=count;
                maxvar=j;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n", a,b,maxvar,max);
    }

    return 0;
}
