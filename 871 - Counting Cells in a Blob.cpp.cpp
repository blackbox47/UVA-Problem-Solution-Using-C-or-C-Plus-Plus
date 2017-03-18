#include<stdio.h>
#include <iostream>
#include <string>
#include<string.h>
#include<queue>
#define max_n 30

using namespace std;

char ss[max_n][max_n];
int arr[max_n][max_n],color[max_n][max_n];

int bfs(int i,int j,int m,int n);

int main ()
{
//    freopen("TELL1.txt","w",stdout);
    string str;
    char c;
    int i,j,count,row,col,mx,rec,test,qq,flag=0;
    scanf("%d%c", &test,&c);
    for(qq=1;qq<=test;qq++)
    {
        if(qq==1) scanf("%c", &c);
        row=0;
        while(1)
        {
            getline (cin,str);
            if(str.size()==0) break;
            col=str.size();
            for(i=0;i<col;i++)
            {
                arr[row][i]=str[i]-48;
            }
            row++;
        }

        mx=0;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(arr[i][j]==1 && color[i][j]==0)
                {
                    rec=bfs(i,j,row,col);
                    if(mx<rec) mx=rec;
                }
            }
        }

        printf("%d\n", mx);
        if(qq!=test) printf("\n");
//       scanf("%c", &c);
        memset(arr,0,sizeof(arr));
        memset(color,0,sizeof(color));
        str.clear();
    }

    return 0;
}

int bfs(int i,int j,int m,int n)
{
    int a,b,row,col,k,count;
    int rr[]={1,1,0,-1,-1,-1,0,1};
    int cc[]={0,1,1,1,0,-1,-1,-1};
    queue<int>q;

    q.push(i);
    q.push(j);
    color[i][j]=1;
    arr[i][j]=0;
    count=1;

    while(!q.empty())
    {
        row=q.front(); q.pop();
        col=q.front(); q.pop();
        for(k=0;k<8;k++)
        {
            a=row+rr[k];
            b=col+cc[k];
            if(a>-1 && a<m && b>-1 && b<n && color[a][b]==0  && arr[a][b]==1)
            {
                q.push(a);
                q.push(b);
                color[a][b]=1;
                arr[a][b]=0;
                count++;
            }
        }
    }

    for(i=0;i<(int)q.size();i++) q.pop();

    return count;
}
