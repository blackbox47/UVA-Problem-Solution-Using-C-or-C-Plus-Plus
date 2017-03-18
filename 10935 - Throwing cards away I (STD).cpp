#include<stdio.h>
#include<queue>
#include<iostream>
#include<string.h>

using namespace std;
int str[10000];
int main(void)
{
    queue<int>q;
    int i,p,a,x,y,k,kl;
    while(scanf("%d", &a)==1)
    {
        if(a==0) break;
        if(a==1)
        {
            printf("Discarded cards:\n");
            printf("Remaining card: 1\n");
            continue;
        }
        for(i=0;i<a;i++)
        {
            q.push(i+1);
        }
        k=0; kl=0;
        while( ( (int)q.size() ) !=1)
        {
            x=q.front();
            str[k]=x;
            k++; kl++;
            q.pop();
            y=q.front();
            q.pop();
            q.push(y);
        }
        printf("Discarded cards:");
        for(k=0;k<kl-1;k++)
        {
            printf(" %d,", str[k]);
        }
        printf(" %d\n", str[k]);
        printf("Remaining card: %d\n", q.front());
        memset(str,0,sizeof(str));
        while(!q.empty())
        {
            q.pop();
        }
    }

    return 0;
}
