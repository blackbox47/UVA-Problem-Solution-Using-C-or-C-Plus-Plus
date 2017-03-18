#include<stdio.h>
#include<queue>
#include<vector>
#include<string.h>
#include<set>
#include<stdlib.h>
#define max_n 100

using namespace std;

char str[max_n][max_n];
int color[max_n][max_n];

struct data
{
    char cc;
    int aa;
};
data arr[max_n];

void bfs(int i,int j,int m,int n,char c);
int cp(void const *p,void const *q);

int main(void)
{
    int m,n,i,j,count,k,kl,test,qq;
    char c;
    set<char>s;
    set<char>::iterator it;
    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        scanf("%d %d", &m,&n);
        for(i=0;i<m;i++) scanf("%s", &str[i]);
    //    printf("Rajib");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(str[i][j]>='a' && str[i][j]<='z')
                {
                    s.insert(str[i][j]);
                }
            }
        }

        k=0; kl=0;
        for(it=s.begin();it!=s.end();it++)
        {
            c=*it;
            count=0;
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(str[i][j]==c)
                    {
                        bfs(i,j,m,n,c);
                        count++;
                    }
                }
            }
            arr[k].cc=c;
            arr[k].aa=count;
            k++; kl++;
        }

        qsort(arr,kl,sizeof(data),cp);
        printf("World #%d\n", qq);
        for(k=0;k<kl;k++)
        {
            printf("%c: %d\n", arr[k].cc,arr[k].aa);
        }

        memset(arr,0,sizeof(arr));
        memset(str,0,sizeof(str));
        memset(color,0,sizeof(color));
        s.clear();
    }

    return 0;
}

void bfs(int i,int j,int m,int n,char c)
{
    int a,b,row,col,k;
    queue<int>q;
    int rr[]={1,0,-1,0};
    int cc[]={0,1,0,-1};

    q.push(i);
    q.push(j);
    color[i][j]=1;

    while(!q.empty())
    {
        row=q.front(); q.pop();
        col=q.front(); q.pop();
        for(k=0;k<4;k++)
        {
            a=row+rr[k];
            b=col+cc[k];
            if(a>-1 && a<m && b>-1 && b<n && color[a][b]==0 && str[a][b]==c)
            {
                q.push(a);
                q.push(b);
                color[a][b]=1;
                str[a][b]='.';
            }
        }
    }

    return ;
}

int cp(void const *p,void const *q)
{
    data *a,*b;
    a=(data *)p; b=(data *)q;

    if( (b->aa == a->aa) ) return ( a->cc -b->cc );
    else return ( b->aa - a->aa );
}
