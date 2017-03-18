#include<stdio.h>
#define mx 1100

int div[mx];

void pre(void);

int main(void)
{
    int i,a,flag,qq;
    pre();
    qq=1;
    while(scanf("%d", &a)==1)
    {
        if(a==0) break;
        flag=0;
        for(i=1000;i>=0;i--)
        {
            if(div[i]==a)
            {
                flag=1;
                break;
            }
        }
        if(flag==1) printf("Case %d: %d\n", qq,i);
        else printf("Case %d: -1\n", qq);
        qq++;
    }

    return 0;
}

void pre(void)
{
    int i,j,k;

    for(i=1;i<=mx;i++)
    {
        for(j=i;j<=mx;j+=i)
        {
            div[j]+=i;
        }
    }

    return ;
}
