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



//set<ll>s;
//set<ll>:: iterator it;

///int rr[]= {-1,-1,0,0,1,1};
///int cc[]= {-1,0,-1,1,0,1};
///int rr[]= {0,0,1,-1};/*4 side move*/
///int cc[]= {-1,1,0,0};/*4 side move*/
///int rr[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
///int cc[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
///int rr[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
///int cc[]={2,-2,1,-1,2,-2,1,-1};/*night move*/

char a[10000];

int main(void)
{
    int i,j,sz;
    while(gets(a))
    {
        sz=strlen(a);
        for(i=0;i<sz;i++)
        {
            a[i]=tolower(a[i]);
            if(a[i]==']') printf("p");
            else if(a[i]=='[') printf("o");
            else if(a[i]=='p') printf("i");
            else if(a[i]=='o') printf("u");
            else if(a[i]=='i') printf("y");
            else if(a[i]=='u') printf("t");
            else if(a[i]=='y') printf("r");
            else if(a[i]=='t') printf("e");
            else if(a[i]=='r') printf("w");
            else if(a[i]=='e') printf("q");

            else if(a[i]==39) printf("l");
            else if(a[i]==';') printf("k");
            else if(a[i]=='l') printf("j");
            else if(a[i]=='k') printf("h");
            else if(a[i]=='j') printf("g");
            else if(a[i]=='h') printf("f");
            else if(a[i]=='g') printf("d");
            else if(a[i]=='f') printf("s");
            else if(a[i]=='d') printf("a");

            else if(a[i]=='/') printf(",");
            else if(a[i]=='.') printf("m");
            else if(a[i]==',') printf("n");
            else if(a[i]=='m') printf("b");
            else if(a[i]=='n') printf("v");
            else if(a[i]=='b') printf("c");
            else if(a[i]=='v') printf("x");
            else if(a[i]=='c') printf("z");

            else printf("%c", a[i]);
        }
        printf("\n");
    }

    return 0;
}

