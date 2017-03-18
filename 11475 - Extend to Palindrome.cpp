#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<iostream>

using namespace std;

#define mx 100010

string aa,bb,rev,ans;
int par[2*mx];

void prefix(int resize);

int main(void)
{
    int i,j,sz,resize,var;
    while(cin>>aa)
    {
        sz=aa.size();
        for(i=sz-1; i>=0; i--) bb+=aa[i];

        rev=bb+'#'+aa;
        resize=rev.size();
        prefix(resize);

        var=par[resize-1];
        var=sz-var;
        ans=aa;
        for(i=var-1;i>=0;i--) ans+=aa[i];
        cout<<ans<<endl;

        memset(par,0,sizeof(par));
        bb.clear(); rev.clear(); ans.clear();
    }

    return 0;
}

void prefix(int resize)
{
    int i,j,k;
    k=0;
    par[0]=0;
    for(i=1; i<resize; i++)
    {
        while(k>0 && rev[i]!=rev[k])
        {
            k=par[k-1];
        }
        if(rev[i]==rev[k]) k++;
        par[i]=k;
    }

    return ;
}
