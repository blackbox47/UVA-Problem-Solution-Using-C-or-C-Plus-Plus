#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
#include<map>
#include<queue>
#include<stack>
#include<iostream>
#include<string>
#include<math.h>
#include<set>
#include <sstream>

using namespace std;

#define pb(b) push_back(b);
#define oo (1<<29)
#define ll long long
#define mp(a,b) make_pair(a,b)
#define PI  2.0*acos(0.0)



//set<ll>s;
//set<ll>:: iterator it;

///int rr[]= {-1,-1,0,0,1,1};
///int cc[]= {-1,0,-1,1,0,1};
///int rr[]= {0,0,1,-1};/*4 side move*/
///int cc[]= {-1,1,0,0};/*4 side move*/
///int rr[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
///int cc[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
///int rr[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
///int cc[]={2,-2,1,-1,2,-2,1,-1};/*night move*/

vector<string>v,v1;
string aa,bb;
map<string,int>m;
map<string,int>:: iterator it;
struct pq
{
    string str;
    int cnt;
    pq(string _str,int _cnt)
    {
        str=_str;
        cnt=_cnt;
    }
};
vector<pq>ans;

bool com(pq x,pq y)
{
    if(x.str<y.str) return 1;
    else return 0;
}

int main(void)
{
    int i,j,n,test,qq;
    scanf("%d", &test);
    bool blank = false;
    for(qq=1;qq<=test;qq++)
    {
        scanf("%d", &n);
        for(i=0;i<n;i++)
        {
            cin>>aa;
            v.pb(aa);
        }
        for(i=0;i<v.size();i++)
        {
            aa=v[i];
            for(j=0;j<aa.size();j++)
            {
                if(aa[j]!='-') bb+=aa[j];
            }
            v1.pb(bb);
            bb.clear();
        }
        v.clear();
        for(i=0;i<v1.size();i++)
        {
            aa=v1[i];
            aa=aa.insert(3,"-");
            v.pb(aa);
        }

        for(i=0;i<v.size();i++)
        {
            aa=v[i];
            bb.clear();
            for(j=0;j<aa.size();j++)
            {
                if(aa[j]=='A' || aa[j]=='B' || aa[j]=='C') bb+='2';
                else if(aa[j]=='D' || aa[j]=='E' || aa[j]=='F') bb+='3';
                else if(aa[j]=='G' || aa[j]=='H' || aa[j]=='I') bb+='4';
                else if(aa[j]=='J' || aa[j]=='K' || aa[j]=='L') bb+='5';
                else if(aa[j]=='M' || aa[j]=='N' || aa[j]=='O') bb+='6';
                else if(aa[j]=='P' || aa[j]=='R' || aa[j]=='S') bb+='7';
                else if(aa[j]=='T' || aa[j]=='U' || aa[j]=='V') bb+='8';
                else if(aa[j]=='W' || aa[j]=='X' || aa[j]=='Y') bb+='9';
                else if(aa[j]=='-') bb+='-';
                else bb+=aa[j];
            }
            v[i].clear();
            v[i]=bb;
        }

        for(i=0;i<v.size();i++) m[ v[i] ]++;
        for(it=m.begin();it!=m.end();it++)
        {
            ans.pb( pq( (*it).first,(*it).second ) );
        }

        sort(ans.begin(),ans.end(),com);

        int flag=0;
        for(i=0;i<ans.size();i++)
        {
            if(ans[i].cnt>1)
            {
                flag=1;
                break;
            }
        }
        if ( blank ) printf ("\n");
        blank = true;
        if(flag==1)
        {
            for(i=0;i<ans.size();i++)
            {
                if(ans[i].cnt>1) cout<<ans[i].str<<" "<<ans[i].cnt<<endl;
            }
        }
        else printf("No duplicates.\n");

        v.clear();
        v1.clear();
        aa.clear();
        bb.clear();
        m.clear();
        ans.clear();
    }

    return 0;
}

