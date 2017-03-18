#include<stdio.h>
#include<math.h>
#include<string.h>
#define max_n 1000001
#define max_p 1000000

bool flag[max_n];
int prime[max_p],arr[100000],str[1000000],indexing[1000000];
int seive(void);
int differ(int p);
int main(void)
{
    int p,i,rev,start,end,a,b,mx,flag,ans,test,qq,tem,count,sum;
    p=seive();
//    for(i=1;i<p;i++) printf("%d\n", prime[i]);
    rev=differ(p);
//    for(i=1;i<rev;i++) printf("%d\n", arr[i]);
    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
            scanf("%d %d", &a,&b);
            if(a>b)
            {
                tem=a;
                a=b;
                b=tem;
            }
//            printf("%d %d\n", a,b);
            for(i=1;i<rev;i++)
            {
                if(prime[i]>=a)
                {
                    start=i;
                    break;
                }
            }
//            printf("%d\n", start);
            end=0;
            for(i=start;i<rev;i++)
            {
//                printf("Rajib\n");
                if(prime[i]>b) break;
                else if(prime[i]<=b)
                {
                    end=i;
        //            break;
                }
            }
//            printf("%d\n", end);
            for(i=start;i<end;i++) str[i]=arr[i];
            mx=0;
            for(i=start;i<end;i++)
            {
                if(mx<str[i]) mx=str[i];
        //        printf("%d\n", str[i]);
            }
        //    printf("mx is:%d\n", mx);

            for(i=start;i<end;i++)
            {
                indexing[str[i]]++;
            }
//            for(i=1;i<=mx;i++) printf("%d %d\n", i,indexing[i]);

            flag=0;
            for(i=1;i<=mx;i++)
            {
                if(indexing[i]!=1 && indexing[i]!=0)
                {
                    flag=1;
                    break;
                }
            }
        //    printf("%d\n", flag);
            if(start==end-1) flag=1;
            ans=0;

            if(flag==0) printf("No jumping champion\n");
            else if(flag==1)
            {
                for(i=1;i<=mx;i++)
                {
//                    printf("%d\n", indexing[i]);
                    if(ans<indexing[i]) ans=indexing[i];
//                    printf("ans is:%d\n", ans);
                }
//                printf("answer is:%d\n", ans);
//                for(i=1;i<=mx;i++) printf("%d %d\n", i,indexing[i]);
                count=0;
                for(i=1;i<=mx;i++)
                {
                    if(ans==indexing[i])
                    {
                        count++;
                        sum=i;
//                        printf("i is:%d\n", i);
//                        break;
                    }
                }
//                printf("count is:%d\n", count);
                if(count>1) printf("No jumping champion\n");
                else printf("The jumping champion is %d\n", sum);
            }
            memset(str,0,sizeof(str));
            memset(indexing,0,sizeof(indexing));
    }

    return 0;
}

int differ(int p)
{
    int i,j;
    for(i=1;i<p;i++) arr[i]=prime[i+1]-prime[i];
//    printf("\n");

    return p-1;
}

int seive(void)
{
    int i,j,k,kl,r,qq,w;
    k=1; kl=1;
    prime[1]=2;
    k++; kl++;
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
//    for(k=1;k<kl;k++) printf("%d\n", prime[k]);

    return kl;
}

