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

char str[50];
map<string,int>m;
map<string,int>:: iterator it;

int main(void)
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int i,j,sz,test,qq;
    string aa,bb;
    char c,ch;

    scanf("%d", &test);
    scanf("%c%c", &c,&ch);
    for(qq=1;qq<=test;qq++)
    {
        int cnt=0;
        while(gets(str))
        {
            int len=strlen(str);
            if(len==0) break;
            aa=str;
            cnt++;
            m[aa]++;
        }
        aa="";
        int var;
        double ans;
        for(it=m.begin();it!=m.end();it++)
        {
            aa=it->first;
            var=it->second;
            ans=((var*1.0)/(cnt*1.0))*100.0;
            cout<<aa<<" ";
            printf("%.4lf\n", ans);
        }
        if(qq!=test) printf("\n");
        m.clear();

    }

    return 0;
}

