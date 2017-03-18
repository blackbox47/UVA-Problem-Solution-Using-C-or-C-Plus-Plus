#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
#define max_n 1100
#define max_p 1000

bool flag[max_n];
int prime[max_p],arr[2000];

int seive(void);

using namespace std;
int main(void)
{
//    freopen("Tell11.txt","w",stdout);
    int i,j,p,a,kl,b,c,mid,midmid,var;
    vector<int>v;
    p=seive();
    while(scanf("%d %d", &a,&b)==2)
    {
        arr[1]=1;
        j=2; kl=1;
        for(i=0;prime[i]<=a;i++)
        {
            arr[j]=prime[i];
            j++; kl++;
        }
        if(kl%2==0) c=2*b;
        else c=(2*b)-1;

        if(c>=kl)
        {
            printf("%d %d: ", a,b);
            printf("%d", arr[1]);
            for(i=2;i<=kl;i++)
            {
                printf(" %d", arr[i]);
            }
            printf("\n\n");
        }
        else if(kl%2!=0)
        {
            mid=kl/2+1;
            v.push_back(arr[mid]);
            c=c-1;
            c=c/2;
            var=1;
            for(i=0;i<c;i++)
            {
                v.push_back(arr[mid-var]);
                var++;
            }
            var=1;
            for(i=0;i<c;i++)
            {
                v.push_back(arr[mid+var]);
                var++;
            }
            sort(v.begin(),v.end());
            printf("%d %d: ", a,b);
            printf("%d", v[0]);
            for(i=1;i<(int)v.size();i++) printf(" %d", v[i]);
            printf("\n\n");
        }

        else if(kl%2==0)
        {
            mid=kl/2+1;
            v.push_back(arr[mid]);
            c=c-1;
            c=c/2;
            var=1;
            for(i=0;i<c;i++)
            {
                v.push_back(arr[mid+var]);
                var++;
            }
            c=c+1;
            var=1;
            for(i=0;i<c;i++)
            {
                v.push_back(arr[mid-var]);
                var++;
            }
            sort(v.begin(),v.end());
            printf("%d %d: ", a,b);
            printf("%d", v[0]);
            for(i=1;i<(int)v.size();i++) printf(" %d", v[i]);
            printf("\n\n");
        }
        v.clear();
    }

    return 0;
}

int seive(void)
{
    int i,j,k=0,kl=0,r;
    prime[0]=2;
    k=1; kl=1;
    for(i=3;i<=max_n;i+=2)
    {
        if(flag[i]==0)
        {
            prime[k]=i;
            k++; kl++;
            r=2*i;
            if(max_n/i>=i)
            {
                for(j=i*i;j<=max_n;j+=r)
                {
                    flag[j]=1;
                }
            }
        }
    }
//    for(k=0;k<kl;k++) printf("%d\n", prime[k]);
//    printf("%d\n", kl);

    return kl;
}
