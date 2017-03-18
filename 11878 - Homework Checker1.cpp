#include<stdio.h>
#include<string.h>
#include<string>
#include<stdlib.h>

using namespace std;

int main(void)
{
    int a,b,c,cnt,var,tem;
    char cc,ch,str[5];
    cnt=0;
    while(scanf("%d%c%d%c%s", &a,&cc,&b,&ch,&str)==5)
    {
        if(cc=='+')
        {
            var=a+b;
            tem=atoi(str);
            if(var==tem) cnt++;
        }
        else if(cc=='-')
        {
            var=a-b;
            tem=atoi(str);
            if(var==tem) cnt++;
        }
        memset(str,0,sizeof(str));
    }
    printf("%d\n", cnt);

    return 0;
}
