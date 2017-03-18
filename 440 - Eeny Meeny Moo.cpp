#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;
void jose(int a);

int main(void)
{
    int a,i,y,x,b;
    while(scanf("%d", &a)==1)
    {
        if(a==0) break;
        jose(a);
    }

    return 0;
}

void jose(int a)
{
    int i,x,n,y,w;
    queue<int>q;
    w=0;
    while(1)
    {
        w++;
        while(!q.empty()) q.pop();
        for(n=1;n<=a;n++)
        {
            q.push(n);
        }
        while((int)q.size()!=1)
        {
            q.pop();
            for(i=0;i<w;i++)
            {
                y=q.front();
                q.pop();
                q.push(y);
            }
        }
        if(q.front()==2) break;
    }
    printf("%d\n", w+1);

    return ;
}
