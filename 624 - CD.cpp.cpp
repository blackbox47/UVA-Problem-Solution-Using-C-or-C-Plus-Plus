#include<stdio.h>
#include<vector>
#include<string.h>

using namespace std;

void rec(int cur,int sum);

int n,make,arr[100],mx;
vector<int>v;
vector<int>q;

int main(void)
{
    int i,j;
    while(scanf("%d %d", &make,&n)==2)
    {
        for(i=0;i<n;i++) scanf("%d", &arr[i]);

        rec(0,0);

        for(i=0;i<(int)q.size();i++)
        {
            printf("%d ", q[i]);
        }
        printf("sum:%d\n", mx);

        v.clear(); q.clear();
        mx=0;
        memset(arr,0,sizeof(arr));
    }

    return 0;
}

void rec(int cur,int sum)
{
    int tem,i,ans,var;
    if(sum<=make)
    {
        ans=0;
        for(i=0;i<(int)v.size();i++)
        {
            ans+=v[i];
        }
        var=ans;
        if(mx<var)
        {
            tem=var;
            q=v;
            mx=var;
        }
        ans=0;
    }
    if(cur==n) return ;
    else
    {
        v.push_back(arr[cur]);
        rec(cur+1,sum+arr[cur]);

        v.pop_back();
        rec(cur+1,sum);
    }
}
