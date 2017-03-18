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
    one.pb(""); one.pb("I"); one.pb("II"); one.pb("III"); one.pb("IV"); one.pb("V"); one.pb("VI"); one.pb("VII");one.pb("VIII"); one.pb("IX");

    ten.pb(""); ten.pb("X"); ten.pb("XX"); ten.pb("XXX"); ten.pb("XL"); ten.pb("L"); ten.pb("LX"); ten.pb("LXX"); ten.pb("LXXX"); ten.pb("XC");

    hundred.pb("");hundred.pb("C");hundred.pb("CC");hundred.pb("CCC");hundred.pb("CD");hundred.pb("D");hundred.pb("DC");hundred.pb("DCC");hundred.pb("DCCC");
    hundred.pb("CM");

    thousand.pb("");thousand.pb("M");thousand.pb("MM");thousand.pb("MMM");

    int i;
    string aa;
//    char arr[100];
    while(cin>>aa)
    {
//        aa.clear();
//        aa=arr;
        if(aa[0]>='0' && aa[0]<='9')
        {
            int a,b,c,d;
            stringstream ss;
            ss<<aa;
            int n;
            ss>>n;
//            printf("fkdld:%d\n", n);

            a=n/1000;
            n=n%1000;

            b=n/100;
            n=n%100;

            c=n/10;
            d=n%10;

            string bb="";
            bb+=thousand[a];
            bb+=hundred[b];
            bb+=ten[c];
            bb+=one[d];
            cout<<bb<<endl;
        }
        else
        {
            int i,a,b,c,d,tem,var;
            string bb="";
            for(i=1;i<=3999;i++)
            {
                var=i;
                a=var/1000;
                var=var%1000;

                b=var/100;
                var=var%100;

                c=var/10;
                d=var%10;
                bb="";
                bb+=thousand[a];
                bb+=hundred[b];
                bb+=ten[c];
                bb+=one[d];
                if( aa== bb  ) { tem=i; break;}
            }
            printf("%d\n", tem);
        }
    }

    return 0;
}

