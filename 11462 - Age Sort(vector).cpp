#include<stdio.h>
#include<vector>
#include<iostream>
#include<stdlib.h>
#include<algorithm>

using namespace std;
int main(void)
{
    vector<int>v;
    int a,b;
    while(scanf("%d", &a)==1)
    {
        v.clear();
        if(a==0) break;
        int i;
        for(i=0;i<a;i++)
        {
            scanf("%d", &b);
            v.push_back(b);
        }
        sort(v.begin(),v.end());
        for(i=0;i< ((int)v.size())-1;i++)
        {
            printf("%d", v[i]);
            printf(" ");
        }
        printf("%d\n", v[a-1]);
        v.clear();
    }

    return 0;
}
