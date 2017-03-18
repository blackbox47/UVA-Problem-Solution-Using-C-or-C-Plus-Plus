#include <iostream>

#include <stdio.h>
#include <string.h>

#define print1(a) cout<<a<<endl
#define print2(a,b) cout<<a<<" "<<b<<endl
#define print3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define ll long long
#define MAX 500050

using namespace std;
ll swp=0;
void merge(int a[],int b[],int c[],int l_a,int l_b)
{
    int k1=0,k2=0,p=0;

    while(k1<l_a || k2<l_b)
    {
        if( k1>=l_a ) {c[p++]=b[k2];k2++;continue;}
        else if(k2>=l_b)
        {
            c[p++]=a[k1];k1++;
            continue;
        }

        if( a[k1]<=b[k2] )
        {
            c[p++]=a[k1];k1++;
        }
        else if( a[k1]>b[k2] )
        {
            c[p++]=b[k2];k2++;
            swp+=(l_a-k1);
        }
    }

}
void partiton(int arr[],int sz)
{
    if(sz==1) return ;
    int len=sz/2;
    int lft[len+10],rght[sz-len+10];

    for(int i=0,p=0;i<len;i++,p++) lft[p]=arr[i];
    for(int i=len,p=0;i<sz;i++,p++) rght[p]=arr[i];
    partiton(lft,len);partiton(rght,sz-len);

    merge(lft,rght,arr,len,sz-len);

    return ;
}
int main(void)
{
    int n;
    int arr[MAX];

    while(scanf("%d",&n)==1 && n)
    {
        swp=0;
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
        partiton(arr,n);

        printf("%lld\n", swp);
    }
    return 0;
}

