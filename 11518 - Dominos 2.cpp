#include<stdio.h>
#include<vector>
#include<queue>
#include<stack>
#include<string.h>
#include<algorithm>
#define max_n 10005

using namespace std;

int color[max_n];
vector<int>v[max_n];
vector<int>v1;

void dfs(int a);

int main(void)
{
    int i,j,test,qq,dominos,l,number,tem,var,count;
    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        scanf("%d %d %d", &dominos,&number,&l);
        for(i=1;i<=number;i++)
        {
            scanf("%d %d", &tem,&var);
//            if(i==1) call=tem;
            v[tem].push_back(var);
        }

        for(i=1;i<=l;i++)
        {
            scanf("%d", &tem);
            v1.push_back(tem);
        }

        for(i=0;i<(int)v1.size();i++)
        {
            dfs(v1[i]);
        }

        count=0;
        for(i=1;i<=dominos;i++)
        {
            if(color[i]==1) count++;
        }
        printf("%d\n", count);

        memset(color,0,sizeof(color));
        for(i=0;i<=dominos;i++) v[i].clear();
        v1.clear();
    }

    return 0;
}

void dfs(int a)
{
    int i,j,k,kl,source;

    stack<int>s;

    s.push(a);
    color[a]=1;

    while(!s.empty())
    {
        source=s.top(); s.pop();
        for(k=0;k<(int)v[source].size();k++)
        {
            if(color[v[source][k]]==0)
            {
                s.push(v[source][k]);
                color[v[source][k]]=1;
            }
        }
    }
    for(i=0;i<s.size();i++) s.pop();

    return ;
}

