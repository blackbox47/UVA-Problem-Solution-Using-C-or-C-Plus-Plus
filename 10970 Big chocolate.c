#include<stdio.h>

int main(void)
{
    int m,n,a;
    while(scanf("%d %d", &m,&n)==2)
    {
        if(m<1||m>300||n<1||n>300)
        {
            break;
        }
        else
        {
            a=(m*n)-1;
            printf("%d\n", a);
        }
    }

    return 0;
}

