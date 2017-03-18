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



set<char>s;
set<char>:: iterator it;

///int rr[]= {-1,-1,0,0,1,1};
///int cc[]= {-1,0,-1,1,0,1};
///int rr[]= {0,0,1,-1};/*4 side move*/
///int cc[]= {-1,1,0,0};/*4 side move*/
///int rr[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
///int cc[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
///int rr[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
///int cc[]={2,-2,1,-1,2,-2,1,-1};/*night move*/



string aa,bb,cc;

int main(void)
{
//    freopen("output.txt","w",stdout);
    int i,j,sz,sz1,n;

    while(scanf("%d", &n)==1)
    {
        if(n==-1) break;
        cin>>aa>>bb;
        sz=aa.size();
        for(i=0;i<sz;i++) s.insert(aa[i]);
        aa.clear();
        for(it=s.begin();it!=s.end();it++) aa+=*it;

        int cnt=0,flag,tem=0;
        printf("Round %d\n", n);
        for(i=0;i<bb.size();i++)
        {
            flag=0;
            for(j=0;j<aa.size();j++)
            {
                if(bb[i]==aa[j])
                {
                    aa[j]='.';
                    tem++;
                    flag=1;
                    break;
                }
            }
            if(tem==aa.size())
            {
                printf("You win.\n");
                break;
            }
            if(flag==0) cnt++;
            if(cnt>=7)
            {
                printf("You lose.\n");
                break;
            }
        }

        if( (tem!=aa.size()) && cnt<7 ) printf("You chickened out.\n");

        aa.clear();
        bb.clear();
        cc.clear();
        s.clear();
    }

    return 0;
}


