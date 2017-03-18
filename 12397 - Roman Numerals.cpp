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

vector<string>one,ten,hundred,thousand;

int main(void)
{
    one.pb(""); one.pb("i"); one.pb("ii"); one.pb("iii"); one.pb("iv"); one.pb("v"); one.pb("vi"); one.pb("vii");one.pb("viii"); one.pb("xi");

    ten.pb(""); ten.pb("x"); ten.pb("xx"); ten.pb("xxx"); ten.pb("xl"); ten.pb("l"); ten.pb("lx"); ten.pb("lxx"); ten.pb("lxxx"); ten.pb("xc");

    hundred.pb("");hundred.pb("c");hundred.pb("cc");hundred.pb("ccc");hundred.pb("cd");hundred.pb("d");hundred.pb("dc");hundred.pb("dcc");hundred.pb("dccc");
    hundred.pb("cm");

    thousand.pb("");thousand.pb("m");thousand.pb("mm");thousand.pb("mmm");

    int n;
    while(scanf("%d", &n)==1)
    {
        int a,b,c,d,i,j;

        /// seperate all the digits

        a=n/1000;
        n=n%1000;

        b=n/100;
        n=n%100;

        c=n/10;
        d=n%10;

        string aa="";

        aa+=thousand[a];
        aa+=hundred[b];
        aa+=ten[c];
        aa+=one[d];

        int cnt=0;
        for(i=0;i<(int)aa.size();i++)
        {
            if(aa[i]=='i') cnt++;
            else if(aa[i]=='v' || aa[i]=='x' || aa[i]=='l' || aa[i]=='c') cnt+=2;
            else if( aa[i]=='d') cnt+=3;
            else if(aa[i]=='m') cnt+=4;
        }
        printf("%d\n", cnt);
    }

    return 0;
}

