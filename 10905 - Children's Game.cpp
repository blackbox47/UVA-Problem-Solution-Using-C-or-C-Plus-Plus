#include<stdio.h>
#include<string>
#include<string.h>
#include<algorithm>
#include<vector>
#include<iostream>

using namespace std;

#define mx 60

vector<string>v;
string aa;

bool com(string a,string b);

int main(void)
{
    int i,j,n;
    while(scanf("%d", &n)==1)
    {
        if(n==0) break;
        for(i=0;i<n;i++)
        {
            cin>>aa;
            v.push_back(aa);
        }
        sort(v.begin(),v.end(),com);
        for(i=0;i<(int)v.size();i++)
        {
            cout<<v[i];
        }
        printf("\n");
        v.clear();
    }

    return 0;
}

bool com(string a,string b)
{
    string c,d;
    c=a+b; d=b+a;
    if(c<d) return 0;
    else return 1;

}
