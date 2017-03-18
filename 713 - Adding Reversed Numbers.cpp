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
#define SZ(x) (int)x.size()
#define REP(i,n) for (i=0;i<n;i++)
#define REV(i,n) for (i=n;i>=0;i--)
#define FOREACH(it,x) for(__typeof((x).begin()) it=(x.begin()); it!=(x).end(); ++it)
#define FOR(i,p,k) for (i=p; i<k;i++)


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

string aa,bb;

string my_reverse(string cc)
{
    int i;
    reverse(cc.begin(),cc.end());
    string dd="";
    int cnt=0;
    for(i=0;i<cc.size();i++)
    {
        if(cnt==0)cnt+=(cc[i]-48);
        if( cnt==0) continue;
        else dd+=cc[i];
    }

    return dd;
}

string cut_leading_zero(string a)
{
    string s;
    int i;
    if(a[0]!='0')   return a;
    REP(i,SZ(a)-1)  if(a[i]!='0')   break;
    FOR(i,i,SZ(a))  s+=a[i];
    return s;
}

string Addition(string a,string b)
{
    int carry=0,i;
    string ans;

    if(SZ(a)>SZ(b)) b=string(SZ(a)-SZ(b),'0')+b;
    if(SZ(b)>SZ(a)) a=string(SZ(b)-SZ(a),'0')+a;
    ans.resize(SZ(a));
    REV(i,SZ(a)-1)
    {
        int sum=carry+a[i]+b[i]-96;
        ans[i]=(char)(sum%10+'0');
        carry=sum/10;
    }
    if(carry)   ans.insert(0,string(1,carry+'0'));
    ans=cut_leading_zero(ans);
    return ans;
}

int main(void)
{
    int cas;
    cin>>cas;
    for(int i=1;i<=cas;i++)
    {
        cin>>aa>>bb;
        aa = my_reverse(aa);
        bb = my_reverse(bb);
        string ans = Addition(aa,bb);
        ans = my_reverse(ans);
        cout<<ans<<endl;
    }

    return 0;
}

