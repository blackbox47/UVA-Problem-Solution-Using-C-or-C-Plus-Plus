#include<stdio.h>
#include<string.h>
#include<string>
#include<iostream>
#include<algorithm>

#define oo (1<<25)
#define mx 10010

using namespace std;

int arr[mx];
int prb;
int rec(int x,int y,int b);

int main(void)
{
    int i,j,sz,a,b,ans,test,qq;
    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        scanf("%d %d", &a,&prb);
//        printf("b is:%d\n", b);
        for(i=0;i<a;i++) scanf("%d", &arr[i]);

//        memset(dp,-1,sizeof(dp));

        ans=rec(0,a-1,0);
//        printf("ans is:%d\n", ans);
        if(ans==0) printf("Case %d: Too easy\n", qq);
        else if(ans>prb) printf("Case %d: Too difficult\n", qq);
        else printf("Case %d: %d\n", qq,ans);

        memset(arr,0,sizeof(arr));
    }

    return 0;
}

int rec(int x,int y,int b)
{
    int mn=oo;
    if(x>=y) return 0;
    if(b>prb) return oo;
    if(arr[x]==arr[y])
    {
        mn=rec(x+1,y-1,b);
    }
    else
    {
        mn=min(mn,rec(x,y-1,b+1)+1);
        mn=min(mn,rec(x+1,y,b+1)+1);
    }

    return mn;
}
