#include<stdio.h>
#include<set>

using namespace std;

int main(void)
{
    int var,a,b,i,p;
    set<int>s;
    set<int>:: iterator it;

    while(scanf("%d %d", &a,&b)==2)
    {
        if(a==0 && b==0) break;
        for(i=0;i<a+b;i++)
        {
            scanf("%d", &var);
            s.insert(var);
        }
        p=s.size();
        int q=(a+b)-p;
        printf("%d\n", q);
        s.clear();
    }

    return 0;
}
