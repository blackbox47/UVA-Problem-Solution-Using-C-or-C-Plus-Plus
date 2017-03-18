#include<stdio.h>

int arr[1000000];
int main(void)
{
    int z,i,m,l,var,count,x,k,flag,kl,ww;
    ww=1;
    while(scanf("%d %d %d %d", &z,&i,&m,&l)==4)
    {
        if(z==0 && i==0 && m==0 && l==0) break;
        var=l;
        count=0;
        k=0; kl=0;
        flag=0;
        while(1)
        {
            arr[k]=l;
            x= ((z*l)+i)%m;
            l=x;
            count++;
            if(var==l)
            {
                printf("Case %d: %d\n", ww,count);
                break;
            }
            for(k=0;k<kl;k++)
            {
                if(l==arr[k])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                printf("Case %d: %d\n", ww,count-1);
                break;
            }
            k++; kl++;
        }
        ww++;
    }

    return 0;
}
