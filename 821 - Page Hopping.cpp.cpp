#include<stdio.h>
#include<string.h>
#include<vector>
#include<queue>
#include<set>
#define max_n 110

using namespace std;

int bfs(int p,int clean);

int dis[max_n],color[max_n];
vector<int>v[max_n];

int main(void)
{
    int tem,var,i,j,call,clean,flag,ans,rec,sz,pos_pair,a,b,cas;
    double result,pos_pair1,ans1;
    set<int>s;
    set<int>:: iterator it;
    flag=0;
    cas=1;
    while(1)
    {
        for(i=0; ;i++)
        {
            scanf("%d %d", &tem,&var);
            if(i==0 && tem==0 && var==0)
            {
                flag=1; break;
            }
            if(tem==0 && var==0) break;
            if(i==0) call=tem;
            s.insert(tem);
            s.insert(var);
            v[tem].push_back(var);
        }
        if(flag==1) break;

        for(it=s.begin();it!=s.end();it++) if(it!=s.end()) clean=*it;

        ans=0;
        for(it=s.begin();it!=s.end();it++)
        {
            rec=bfs(*it,clean);
            ans+=rec;
            memset(color,0,sizeof(color));
        }

        sz=s.size();

        pos_pair=sz*(sz-1);

        pos_pair1=pos_pair*(1.0);
        ans1=ans*(1.0);

        result=ans1/pos_pair1;

    //    printf("Ans is:%.3lf\n", result);

        printf("Case %d: average length between pages = %.3lf clicks\n", cas,result);

        cas++;
        s.clear();
        memset(dis,0,sizeof(dis));
        memset(color,0,sizeof(color));
        for(i=0;i<=max_n;i++) v[i].clear();
    }

    return 0;
}

int bfs(int p,int clean)
{
    int i,j,k,source,sum;
    queue<int>q;

    q.push(p);
    color[p]=1;

    while(!q.empty())
    {
        source=q.front(); q.pop();
        for(i=0;i<(int) (v[source]).size(); i++)
        {
            if(color[v[source][i]]==0)
            {
                dis[v[source][i]]=dis[source]+1;
                color[v[source][i]]=1;
                q.push(v[source][i]);
            }
        }
    }

    sum=0;

    for(i=0;i<=clean;i++)
    {
        sum+=dis[i];
    }
    memset(dis,0,sizeof(dis));

    for(i=0;i<(int)q.size();i++) q.pop();

    return sum;
}
// 1 2 1 3 2 4 4 3 3 1 0 0
