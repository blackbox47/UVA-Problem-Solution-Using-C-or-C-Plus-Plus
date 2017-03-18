#include<stdio.h>
#include<math.h>

int main(void)
{
    int a,b,i,count;
    double c;
    while(scanf("%d %d", &a,&b)==2)
    {
        if(a==0 && b==0) break;
        else if(a<1) break;
        else
        {
            count=0;
            for(i=a;i<=b;i++)
            {
                c=sqrt(i);
                if(c-(int)c==0) count++;
            }
            printf("%d\n", count);
        }
    }

    return 0;
}

