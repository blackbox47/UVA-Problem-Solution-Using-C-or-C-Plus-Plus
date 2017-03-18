#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;

string a;
int ans;

int main(void)
{
    int i,j,tem,test,qq;
    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        cin>>a;
        if(a=="donate")
        {
            scanf("%d", &tem);
            ans+=tem;
        }
        else if(a=="report")
        {
            printf("%d\n", ans);
        }
        a.clear();
    }

    return 0;
}
