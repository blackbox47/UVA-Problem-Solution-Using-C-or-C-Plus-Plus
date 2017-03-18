#include <stdio.h>

int main()
{
    int n, i, a=0, count;
    while(scanf("%d", &n)==1)
    {
        if(n>0)
        {
            count=0;
            for(i=1;i<n;)
            {
                {
                    count++;
                    i = i*2;
                }
            }
        }
        else break;
        a++;
        printf("Case %d: %d\n", a, count);
    }
    return 0;
}
