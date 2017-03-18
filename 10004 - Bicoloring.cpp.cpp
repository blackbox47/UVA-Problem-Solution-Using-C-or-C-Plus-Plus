#include<stdio.h>
#include<queue>
#include<string.h>
#include<vector>
#define max_n 210

using namespace std;

struct data
{
    int node;
    int nodecolor;
};
int color[210];
vector<int>v[max_n];

void bfs(int p);

int main(void)
{
    int nod,edg,i,tem,var,call;

    while(scanf("%d", &nod)==1)
    {
        if(nod==0) break;
        scanf("%d", &edg);
        for(i=1;i<=edg;i++)
        {
            scanf("%d %d", &tem,&var);
            if(i==1) call=tem;
            v[tem].push_back(var);
            v[var].push_back(tem);
        }

        bfs(call);

        memset(color,0,sizeof(color));
        for(i=0;i<nod;i++) v[i].clear();
    }

    return 0;
}

void bfs(int p)
{
    queue<data>q;
    data svariable;
    int i,j,sourcenode,sourcecolor,flag;

    svariable.node=p;
    svariable.nodecolor=1;
    color[p]=1;
    q.push(svariable);

    flag=0;

    while(!q.empty())
    {
        sourcenode=q.front().node;
        sourcecolor=q.front().nodecolor;
        q.pop();
        for(i=0;i<(int) (v[sourcenode]).size();i++)
        {
            if(color[v[sourcenode][i]]==sourcecolor)
            {
                flag=1;
                break;
            }
            else if( color[v[sourcenode][i]]==0)
            {
                svariable.node=v[sourcenode][i];
                if(sourcecolor==1)
                {
                    svariable.nodecolor=2;
                }
                else if(sourcecolor==2) svariable.nodecolor=1;

                q.push(svariable);

//                color[v[sourcenode][i]]=svariable.nodecolor;
            }
        }
        if(flag==1) break;
    }
    if(flag==1) printf("NOT BICOLORABLE.\n");
    else printf("BICOLORABLE.\n");

    return ;
}
