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
//v.erase(unique(v.begin(),v.end()),v.end());
//map<string,int>m;
//map<string,int>:: iterator it;
// reverse(aa.begin(),aa.end()); /// for string

///int rr[]= {-1,-1,0,0,1,1};
///int cc[]= {-1,0,-1,1,0,1};
///int rr[]= {0,0,1,-1};/*4 side move*/
///int cc[]= {-1,1,0,0};/*4 side move*/
///int rr[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
///int cc[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
///int rr[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
///int cc[]={2,-2,1,-1,2,-2,1,-1};/*night move*/

map<string,string>m;
map<string,string>:: iterator it;
char str[100010];
vector<string>v;

int main(void)
{
    int i,j,n,var;
    string aa,bb;
    while(gets(str))
    {
        int len=strlen(str);
        if(len==0) break;
        for(i=0;i<len;i++)
        {
            if(str[i]==' ')
            {
                var=i; break;
            }
        }
        aa=""; bb="";
        for(i=0;i<var;i++) aa+=str[i];
        for(i=var+1;i<len;i++) bb+=str[i];

        m[bb]=aa;
        v.pb(bb);
        memset(str,0,sizeof(str));
    }
    sort(v.begin(),v.end());

    aa.clear();
    while(cin>>aa)
    {
        if(binary_search(v.begin(),v.end(),aa))
        {
            it=m.find(aa);
            cout<<it->second<<endl;
        }
        else printf("eh\n");
    }

    return 0;
}

