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


int arr[500000],para_arr[500000];

int main(void)
{
    int day,number_of_party,parameter,i,j,tem,test,qq;
    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        scanf("%d", &day);
        scanf("%d", &number_of_party);
        for(i=0;i<number_of_party;i++) scanf("%d", &para_arr[i]);

        arr[6]=2; arr[7]=2;
        tem=6;
        for(i=6;i<=day;i++)
        {
            tem+=7;
            arr[tem]=2;
            arr[tem+1]=2;
        }

        for(i=0;i<number_of_party;i++)
        {
            tem=0;
            for(j=1;j<=day;j++)
            {
                tem+=para_arr[i];
                if(arr[tem]==0) arr[tem]=1;
            }
        }
        int cnt=0;
        for(i=1;i<=day;i++)
        {
            if(arr[i]==1) cnt++;
        }
        printf("%d\n", cnt);

        memset(arr,0,sizeof(arr));
        memset(para_arr,0,sizeof(para_arr));
    }

    return 0;
}
