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
#define oo (1<<30)
#define ll long long
#define mp(a,b) make_pair(a,b)
#define PI  2.0*acos(0.0)
#define Reverse(x) reverse(x.begin(),x.end())
#define all(x) (x).begin(),(x).end()
#define fs      first
#define sc      second

// prime number upto 50 {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
//set<ll>s;
//set<ll>:: iterator it;
//v.erase(unique(v.begin(),v.end()),v.end());
//map<string,int>mymap;thdhsn@gmail.com
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

//binary search here ans is a string we are searchin for
//binary_search(have.begin(),have.end(),ans)


///int rr[]= {-1,-1,0,0,1,1};
///int cc[]= {-1,0,-1,1,0,1};
///int rr[]= {0,0,1,-1};/*4 side move*/
///int cc[]= {-1,1,0,0};/*4 side move*/
///int rr[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
///int cc[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
///int rr[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
///int cc[]={2,-2,1,-1,2,-2,1,-1};/*night move*/

//string ans;
//
//void decimal_binary(int n)
//{
//    int a;
//    if(n==0) return ;
//    a = n%2;
//    n = n/2;
//    decimal_binary(n);
//    ans+= a+48;
//}

//int par[100];

int main(void)
{
    int cas;
    long long n;
    double ans1,ans2;
    cin>>cas;
    for(int i=0;i<cas;i++)
    {
        cin>>n;
        ans1 = ((-1)+sqrt(1+(8*n*1.0)))/2;
        ans2 = ((-1)-sqrt(1+(8*n*1.0)))/2;
        if(ans1>=0) cout<<(long long)ans1<<endl;
        else cout<<(long long)ans2<<endl;
    }

    return 0;
}

