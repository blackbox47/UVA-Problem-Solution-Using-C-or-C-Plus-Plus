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

struct pq
{
    string aa;
    int rak;
    int pos;
    pq(string a,int b,int c)
    {
        aa=a;
        rak=b;
        pos=c;
    }
};
vector<pq>v;
bool com(pq x,pq y)
{
    if( x.rak== y.rak )
    {
        if( x.pos>y.pos ) return 0;
        else return 1;
    }
    else
    {
        if( x.rak>y.rak ) return 1;
        else return 0;
    }
}

int main(void)
{
    string bb;
    int cas,rak;
    cin>>cas;
    for(int qq=1; qq<=cas; qq++)
    {
        for(int i=0; i<10; i++)
        {
            cin>>bb;
            cin>>rak;
            v.pb(pq(bb,rak,i));
        }
        sort(v.begin(),v.end(),com);
        int mx=0;
        for(int i=0; i<v.size(); i++)
        {
            mx = max(mx,v[i].rak);
        }
        printf("Case #%d:\n", qq);
        for(int i=0; i<v.size(); i++)
        {
            if( v[i].rak == mx )
            {
                cout<<v[i].aa<<endl;
            }
        }
        v.clear();
    }
    return 0;
}



//2
//www.youtube.com 1
//www.google.com 2
//www.google.com.hk 3
//www.alibaba.com 10
//www.taobao.com 5
//www.bad.com 10
//www.good.com 7
//www.fudan.edu.cn 8
//www.university.edu.cn 9
//acm.university.edu.cn 10
//www.youtube.com 1
//www.google.com 2
//www.google.com.hk 3
//www.alibaba.com 11
//www.taobao.com 5
//www.bad.com 10
//www.good.com 7
//www.fudan.edu.cn 8
//acm.university.edu.cn 9
//acm.university.edu.cn 10
