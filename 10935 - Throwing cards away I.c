#include<stdio.h>

int arr[100000],str[100000];
int del(int p);
int insert(int s);
int k,kl;
int main(void)
{
  //  freopen("ee.txt","w",stdout);
    int a,i,q,x,y,s,flag;
    k=0; kl=0;
    while(scanf("%d", &a)==1)
    {
        if(a==0) break;
        if(a==1)
        {
            printf("Discarded cards:\n");
            printf("Remaining card: 1\n");
            continue;
        }
        if(a==2)
        {
            printf("Discarded cards: 1\n");
            printf("Remaining card: 2\n");
            continue;
        }
        for(i=0;i<a;i++)
        {
            arr[i]=i+1;
        }
        while(1)
        {
            q=del(a--);
            if(q==1) break;
            x=insert(q);
        }

        flag=1;
        printf("Discarded cards:");
        for(k=0;k<kl;k++)
        {
            if(flag==1)
            {
                printf(" ");
                printf("%d,", str[k]);
                flag=0;
            }
            else
            {
                if(k==kl-1) printf(" %d", str[k]);
                else printf(" %d,", str[k]);
            }
        }
        printf("\n");

        printf("Remaining card: %d\n", arr[0]);

        k=0; kl=0;
    }

    return 0;
}

int del(int p)
{
    int i;
    str[k]=arr[0];
    k++; kl++;
    for(i=0;i<p;i++)
    {
        arr[i]=arr[i+1];
    }
    p=p-1;

    return p;
}

int insert(int s)
{
    int i,var;
    var=arr[0];
    for(i=0;i<s-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[s-1]=var;

    return s;
}




