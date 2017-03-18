#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
#include<map>
#include<iostream>

using namespace std;

#define ll long long

vector<ll>v;
map<ll,ll>m;

int main(void)
{
    ll i,j,x;

    while(scanf("%lld", &x)==1)
    {
        if(m[x]==0)
        {
            v.push_back(x);
            m[x]++;
        }
        else
        {
            m[x]++;
        }
    }
    for(i=0;i<(ll)v.size();i++) cout<<v[i]<<" "<<m[ v[i] ]<<endl;

    return 0;
}
