#include<stdio.h>
#include<math.h>

int main(void)
{
    long long int a,i,arr[10000],b,x,z,j,y,c,rna;
    while(scanf("%lld", &b)==1)
    {
        if(b==0) break;
        if(b<0) b=(-1)*b;
        a=b;
        z=1;
        j=0;
        rna=0;
        for(i=2;i<=sqrt(a);i++)
        {
            if(a%i==0)
            {
                if(rna<i) rna=i;
                arr[j]=i;
                j++;
                z++;
                a=a/i;
                i=1;
            }
        }
        if(rna<a) rna=a;
        arr[j]=a;

        y=arr[0];
        c=0;
        for(j=1;j<z;j++)
        {
            if(y==arr[j]) c++;
        }
        if(z==1) printf("-1\n");
        else if(c==(z-1)) printf("-1\n");
        else printf("%lld\n", rna);
    }

    return 0;
}


