#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
#include<stdlib.h>
#include<iostream>
#include<iostream>

using namespace std;

vector<string>v;

int prefix(string bb,string cc);

int main(void)
{
    int a,i,tem_size,test,qq;
    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        string aa,tem;
        scanf("%d", &a);
        for(i=0;i<a;i++)
        {
            cin>>aa;
            v.push_back(aa);
        }
        sort(v.begin(),v.end());

        int flag=0,j;
        for(i=0;i<(int)v.size()-1;i++)
        {
            if(prefix(v[i],v[i+1])==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1) printf("NO\n");
        else printf("YES\n");
        v.clear();
    }

    return 0;
}

int prefix(string bb,string cc)
{
    int i,j;

//    if(cc.size()<bb.size()) return 1;

    for(i=0;i<(int)bb.size();i++)
    {
        if(bb[i]!=cc[i]) return 1;
    }

    return 0;
}
