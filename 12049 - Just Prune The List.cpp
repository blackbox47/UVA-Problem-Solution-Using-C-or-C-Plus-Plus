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

map<int,int>mp1,mp2;
set<int>set1;
set<int>:: iterator it;

int main(void)
{
    int i,j,a,b,tem,test,qq;
    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        scanf("%d %d", &a,&b);
        for(i=0;i<a;i++) { scanf("%d", &tem);  mp1[tem]++; set1.insert(tem); }
        for(i=0;i<b;i++) { scanf("%d", &tem);  mp2[tem]++; set1.insert(tem); }

        int ans=0;
        for( it=set1.begin();it!=set1.end();it++ )
        {
            ans+= abs( mp1[ (*it) ] - mp2[ (*it) ] );
        }
        printf("%d\n", ans);

        mp1.clear(); mp2.clear(); set1.clear();
    }

    return 0;
}

