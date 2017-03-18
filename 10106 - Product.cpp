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


#define INF 1<<28
#define SIZE 1000

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

string Multiplication(string a,string b);
string Addition(string a,string b);
string cut_leading_zero(string a);

string aa,bb,cc;

int main(void)
{
    while(cin>>aa)
    {
        cin>>bb;
        cc=Multiplication(aa,bb);
        cout<<cc<<endl;
    }

    return 0;
}

string Multiplication(string a,string b)
{
    int i,j,multi,carry;
    string ans,temp;

    ans="0";
    REV(j,SZ(b)-1)
    {
        temp="";
        carry=0;
        REV(i,SZ(a)-1)
        {
            multi=(a[i]-'0')*(b[j]-'0')+carry;
            temp+=(multi%10+'0');
            carry=multi/10;
        }
        if(carry)   temp+=(carry+'0');
        Reverse(temp);
        temp+=string(SZ(b)-j-1,'0');
        ans=Addition(ans,temp);
    }
    ans=cut_leading_zero(ans);
    return ans;
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

string cut_leading_zero(string a)
{
    string s;
    int i;
    if(a[0]!='0')   return a;
    REP(i,SZ(a)-1)  if(a[i]!='0')   break;
    FOR(i,i,SZ(a))  s+=a[i];
    return s;
}
