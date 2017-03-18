#include<stdio.h>
#include<string.h>
#include<vector>
#include<math.h>
#include<stdlib.h>
#include<algorithm>
#define oo (1<<25)

using namespace std;

int str[65000];

int main(void)
{
    vector<int>v;
    int a,i,j,sum,var,tem,mn,minas,x,test,qq,count;
    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        scanf("%d", &a);
        sum=0;
        for(i=0;i<a;i++)
        {
            scanf("%d", &x);
            sum+=x;
            v.push_back(x);
        }

        sort(v.begin(),v.end());

        str[0]=1;

        mn=oo; count=0;
        for(i=0;i<(int)v.size();i++)
        {
            for(j=sum;j>=0;j--)
            {
                if(str[j]==1)
                {
                    var=j+v[i];
                    if(var<=sum)
                    {
                        count++;
                        str[var]=1;
                        tem=sum-var;
                        minas=abs(tem-var);
                        if(mn>minas) mn=minas;
                    }
                }
            }
        }
        if(count==0) printf("0\n");
        else printf("%d\n", mn);

        memset(str,0,sizeof(str));
        v.clear();
    }

    return 0;
}
