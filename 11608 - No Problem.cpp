#include<stdio.h>
#include<string.h>
#include<vector>
#include<string>

using namespace std;

#define mx 120

int pro_created[mx],pro_required[mx];

int main(void)
{
    int i,j,n,qq=1;
    while(scanf("%d", &n)==1)
    {
        if(n<0) break;
        for(i=1;i<=12;i++) scanf("%d", &pro_created[i]);
        for(i=1;i<=12;i++) scanf("%d", &pro_required[i]);
        printf("Case %d:\n", qq);
        for(i=1;i<=12;i++)
        {
            if(n>=pro_required[i])
            {
                printf("No problem! :D\n");
                n=n-pro_required[i];
            }
            else
            {
                printf("No problem. :(\n");
            }
            n+=pro_created[i];
        }
        qq++;
    }

    return 0;
}
