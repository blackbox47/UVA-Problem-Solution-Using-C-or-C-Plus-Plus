#include<stdio.h>

int main(void)
{
    int a,b,c,x,y,carry,d,e,f,z,car,j,p,i;
    j=0;
    scanf("%d", &p);
    {
        for(i=1;i<=p;i++)
        {
            scanf("%d/%d/%d", &a,&b,&c);
            scanf("%d/%d/%d", &d,&e,&f);
            carry=0;
            if(a<d)
            {
                a=a+30;
                carry=1;
                x=a-d;
            }
            else if(a==d || a>d)
            {
                x=a-d;
            }
            car=0;
            if(b<(e+carry))
            {
                b=b+12;
                car=1;
                y=b-(e+carry);
            }
            else if(b==(e+carry) || b>(e+carry) )
            {
                y=b-e;
            }
            if(car==1)
            {
                f=f+1;
                z=c-f;
            }
            else if(car==0)
            {
                z=c-f;
            }
            j++;
            if(z<0) printf("Case #%d: Invalid birth date\n", j);
            else if(z>130) printf("Case #%d: Check birth date\n", j);
            else printf("Case #%d: %d\n", j,z);
        }
    }

    return 0;
}
