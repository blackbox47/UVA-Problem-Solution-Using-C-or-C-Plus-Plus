#include<stdio.h>
#include<string.h>

int arr[1000];
int rear=0,front=0;
void push(int p);
void pop(void);

int main(void)
{
    int i,a,k,var,q,str[1000],j,kl,flag;
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
        for(i=0;i<a;i++) push(i+1);
        var=0;
        j=0; kl=0;
        memset(str,0,sizeof(str));
        for(k=0; ;k++)
        {
            pop();
            str[j]=arr[var];
            j++; kl++;
            var++;
            q=arr[var];
            push(q);
            var++;
            pop();
            if(q==0) break;
        }

        /// for print

        printf("Discarded cards:");
        flag=0;
        for(j=0;j<kl-1;j++)
        {
            if(flag==0)
            {
                printf(" %d,", str[j]);
                flag=1;
            }
            else if(flag==1)
            {
                if(j==kl-2) printf(" %d\n", str[j]);
                else printf(" %d,", str[j]);
            }
        }

        printf("Remaining card: %d\n", arr[front-3]);
        memset(arr,0,sizeof(arr));
        memset(str,0,sizeof(str));
        front=0; rear=0;
    }

    return 0;
}

void push(int p)
{
    arr[rear]=p;
    rear++;
}

void pop(void)
{
    front++;
}
