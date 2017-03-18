#include<stdio.h>
#include<queue>
#include<iostream>

using namespace std;
int main(void)
{
    queue<int>q;
    int a,m,x,i;
    while(scanf("%d", &a)==1)
    {
        if(a==0) break;
        if(a==13)
        {
            printf("1\n");
            continue;
        }
        m=1;
        while(1)
        {
            while(!q.empty()) q.pop();
            for(i=1;i<=a;i++)
            {
                q.push(i);
            }
            while( (int)q.size()!=1 )
            {
                q.pop();
                for(i=1;i<=m;i++)
                {
                    x=q.front();
                    q.push(x);
                    q.pop();
                }
            }
            if(q.front()==13) break;
            m++;
        }
        printf("%d\n", m+1);
    }

    return 0;
}
