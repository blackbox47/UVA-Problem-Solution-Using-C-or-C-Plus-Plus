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

#define mx 1000010

char str[mx];
map<string,int>mymap;
map<string,int>:: iterator it;
vector<string>v;

int main(void)
{
    int i,j,n,m,var;
    string aa;
    while(scanf("%d %d", &n,&m)==2)
    {
        for(i=0;i<n;i++)
        {
            cin>>aa>>var;
            mymap[aa]=var;
        }

        for(j=0;j<m;j++)
        {
            aa="";
            while(1)
            {
                gets(str);
                if(str[0]=='.') break;
                aa+=str;
                aa+=' ';
            }

            string bb="";
            for(i=0;i<aa.size();i++)
            {
                if(aa[i]!=' ') bb+=aa[i];
                else if(aa[i]==' ')
                {
                    v.pb(bb);
                    bb.clear();
                }
            }

            int sum=0;
            for(i=0;i<(int)v.size();i++)
            {
                if(mymap[ v[i] ]!=0)
                {
                    it=mymap.find(v[i]);
                    sum+=it->second;
                }
            }
            cout<<sum<<endl;

            v.clear();
        }

        mymap.clear();
        v.clear();
    }

    return 0;
}

