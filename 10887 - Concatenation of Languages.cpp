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
#define Reverse(x) reverse(x.begin(),x.end())

// prime number upto 50 {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
//set<ll>s;
//set<ll>:: iterator it;
//v.erase(unique(v.begin(),v.end()),v.end());
//map<string,int>mymap;
//map<string,int>:: iterator it;
// reverse(aa.begin(),aa.end()); /// for string

/// binary to decimal

//int ans=0;
//    for(int i=0;i<j;i++)
//    {
//        ans=ans*2+str[i]-'0';
//    }


/// string to int
//string a="10";
//ss<<a;
//int ans;
//ss>>ans;
//printf("%d\n", ans+20);
//

/// int to string
//int a=10;
//string aa;
//ss<<a;
//aa=ss.str();
//cout<<aa<<endl;



///int rr[]= {-1,-1,0,0,1,1};
///int cc[]= {-1,0,-1,1,0,1};
///int rr[]= {0,0,1,-1};/*4 side move*/
///int cc[]= {-1,1,0,0};/*4 side move*/
///int rr[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
///int cc[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
///int rr[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
///int cc[]={2,-2,1,-1,2,-2,1,-1};/*night move*/

vector<string>x,y;
set<string>s;

int main(void)
{
    int a,b,ans,test,qq,i,j;
    string aa,bb;
    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        scanf("%d %d", &a,&b);
        getline(cin,aa);
        for(i=0;i<a;i++) {getline(cin,aa); x.pb(aa);}
        for(i=0;i<b;i++) {getline(cin,aa); y.pb(aa);}

        for(i=0;i<(int)x.size();i++)
        {
            for(j=0;j<(int)y.size();j++)
            {
                bb="";
                bb= x[i]+y[j];
                s.insert(bb);
            }
        }
        printf("Case %d: %d\n", qq,s.size());

        s.clear(); x.clear(); y.clear();
    }

    return 0;
}

