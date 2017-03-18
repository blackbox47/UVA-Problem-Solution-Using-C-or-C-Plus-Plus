#include<stdio.h>
#include<math.h>

int main(void)
{
    long long int a,i,b,sum,flag,x;
    while(scanf("%I64d", &x)==1)
    {
        if(x==0) break;
        if(x==2)
        {
            printf("Perfect: 6!\n");
            continue;
        }
        if(x==3)
        {
            printf("Perfect: 28!\n");
            continue;
        }
        if(x==5)
        {
            printf("Perfect: 496!\n");
            continue;
        }
        if(x==7)
        {
            printf("Perfect: 8128!\n");
            continue;
        }
        if(x==13)
        {
            printf("Perfect: 33550336!\n");
            continue;
        }
        if(x==17)
        {
            printf("Perfect: 8589869056!\n");
            continue;
        }
        if(x==19)
        {
            printf("Perfect: 137438691328!\n");
            continue;
        }
        if(x==31)
        {
            printf("Perfect: 2305843008139952128!\n");
            continue;
        }
//        if(x<=11)
//        {
//            a=pow(2,x)-1;
//            a=pow(2,x-1)*a;
//            sum=1;
//            for(i=2;i<=a/2;i++)
//            {
//                if(a%i==0)
//                {
//                    sum+=i;
//                }
//            }
//            if(sum==a) printf("Perfect: %I64d!\n", a);
//        }
        else
        {
            flag=1;
            for(i=2;i<=sqrt(x);i++)
            {
                if(x%i==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1) printf("Given number is prime. But, NO perfect number is available.\n");
            else if(flag==0) printf("Given number is NOT prime! NO perfect number is available.\n");
        }
    }

    return 0;
}
