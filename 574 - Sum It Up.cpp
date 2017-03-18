#include<stdio.h>
#include<vector>
#include<string.h>
#include<map>

using namespace std;

int arr[1000],ans,make_number,no_number,cnt,k;
typedef vector<int>vi;

vi v;
map<vi,bool>mp;

vector<int>answer[1100];

void rec(int cur,int sum);

int main(void)
{
    int i,j,aaa,loop;
    while(scanf("%d %d", &make_number,&no_number)==2)
    {
        if(make_number==0 && no_number==0) break;
        for(i=0; i<no_number; i++)
        {
            scanf("%d", &arr[i]);
        }

        rec(0,0);

        printf("Sums of %d:\n", make_number);
        if(k==0) printf("NONE\n");
        else
        {
            for(i=0;i<k;i++)
            {
                loop=(int)answer[i].size();
                if(loop==1) printf("%d\n", answer[i][0]);
                else
                {
                    for(j=0;j<loop-1;j++)
                    {
                        printf("%d+", answer[i][j]);
                    }
                    printf("%d\n", answer[i][loop-1]);
    //                printf("\n");
                }
            }
        }
        v.clear();
        memset(arr,0,sizeof(arr));
        cnt=0;
        for(i=0;i<k;i++) answer[i].clear();
        k=0; mp.clear();
    }

    return 0;
}

void rec(int cur,int sum)
{
    if(sum==make_number)
    {
        cnt++;
        if (mp[v]==0)
        {
            for(int i=0;i<(int)v.size();i++)
            {
                answer[k].push_back(v[i]);
            }
            k++;
            mp[v]=1;
        }
    }


    if(cur==no_number)  return ;
    else
    {
        v.push_back(arr[cur]);
        rec(cur+1,sum+arr[cur]);

        v.pop_back();
        rec(cur+1,sum);

    }
}
