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



set<string>s;
set<string>:: iterator it;

///int rr[]= {-1,-1,0,0,1,1};
///int cc[]= {-1,0,-1,1,0,1};
///int rr[]= {0,0,1,-1};/*4 side move*/
///int cc[]= {-1,1,0,0};/*4 side move*/
///int rr[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
///int cc[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
///int rr[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
///int cc[]={2,-2,1,-1,2,-2,1,-1};/*night move*/

int main(void)
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int i,j,sz;
    string aa;
    char c;
    while(scanf("%c", &c)==1)
    {
        c=tolower(c);

        if(c>='a' && c<='z') aa+=c;
        else
        {
            s.insert(aa);
            aa.clear();
            aa="";
        }
    }
    s.insert(aa);
    int cnt=0;
    for(it=s.begin();it!=s.end();it++)
    {
        if(cnt!=0) cout<<*it<<endl;
        cnt++;
    }

    return 0;
}

