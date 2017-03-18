#include<stdio.h>
#include<stdlib.h>

int cp(void const *x,void const *y);

int main(void)
{
//    freopen("ee.txt","w", stdout);
    int a,i,arr[10000],j,kl,str[10000],p,flag,q;
    while(scanf("%d", &a)==1)
    {
        if(a==0) break;
        for(i=0;i<a;i++) scanf("%d", &arr[i]);
        j=0; kl=0;
        for(i=0;i<a-1;i++)
        {
            p=arr[i]-arr[i+1];
            if(p<0) p=p*(-1);
            str[j]=p;
            j++; kl++;
        }

        qsort(str,a-1,sizeof(int),cp);

        if(arr[0]==1 && a==1)
        {
            printf("Jolly\n");
            continue;
        }
        if(str[0]!=1)
        {
            printf("Not jolly\n");
            continue;
        }
        else
        {
            flag=0;
            for(j=0;j<kl-1;j++)
            {
                q=str[j+1]-str[j];
                if(q!=1)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0) printf("Jolly\n");
        else if(flag==1) printf("Not jolly\n");
    }

    return 0;
}

int cp(void const *x,void const *y)
{
    return *(int *)x- *(int *)y;
}
