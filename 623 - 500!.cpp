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


#define REP(i,n) for (i=0;i<n;i++)
#define REV(i,n) for (i=n;i>=0;i--)
#define FOREACH(it,x) for(__typeof((x).begin()) it=(x.begin()); it!=(x).end(); ++it)
#define FOR(i,p,k) for (i=p; i<k;i++)

#define bug(x)    cout<< "->" <<#x<<": "<<x<<endl   //debug(x) variable
#define Sort(x) sort(x.begin(),x.end())
#define Reverse(x) reverse(x.begin(),x.end())
#define MP(a,b) make_pair(a,b)
#define CLEAR(x,with) memset(x,with,sizeof(x))
#define COPY(c,r)   memcpy(c,r,sizeof(r))
#define SZ(x) (int)x.size()
#define PB push_back
#define popcount(i) __builtin_popcount(i)
#define gcd(a,b)    __gcd(a,b)
#define fs first
#define sc second
#define pb(b) push_back(b);

vector<string>v;
string aa,bb,cc;

string Addition(string a,string b);
string Multiplication(string a,int k);
string cut_leading_zero(string a);

int main(void)
{
    aa="1";
    v.pb(aa);
    for(int i=1;i<=1010;i++)
    {
        cc=Multiplication(v[i-1],i);
        v.pb(cc);
    }
    int n;
    while(scanf("%d", &n)==1)
    {
        printf("%d!\n", n);
        cout<<v[n]<<endl;
    }

    return 0;
}

string Multiplication(string a,int k)
{
    string ans;
    int i,sum,carry=0;

    REV(i,SZ(a)-1)
    {
        sum=(a[i]-'0')*k+carry;
        carry=sum/10;
        ans+=(sum%10)+'0';
    }
    while(carry)    {ans+=(carry%10)+'0';carry/=10;}
    Reverse(ans);
    ans=cut_leading_zero(ans);
    return ans;
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

