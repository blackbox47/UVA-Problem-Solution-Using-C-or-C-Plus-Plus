#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

#define mx 10000010

double store[mx];

int main(void)
{
    int n,i,test,qq;
    double last=0.0;
    for(i=1;i<=mx;i++)
    {
        last+=log10(i);
        store[i]=last;
    }

    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        scanf("%d", &n);
        int ans=store[n]+1;
        printf("%d\n", ans);
    }

    return 0;
}


//()#&
