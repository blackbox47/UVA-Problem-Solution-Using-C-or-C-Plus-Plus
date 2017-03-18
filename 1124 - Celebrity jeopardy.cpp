#include<stdio.h>
#include<string>
#include<iostream>
#include<string.h>

using namespace std;

string aa;
char str[1000];

int main(void)
{
    while(gets(str))
    {
        aa=str;
        cout<<aa<<endl;
    }

    return 0;
}
