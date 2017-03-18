#include<stdio.h>
#include<vector>
#include<algorithm>
#include<string.h>
#include<string>
#include<math.h>

using namespace std;

#define oo (1<<28)

vector<int>v;

int main(void)
{
    int i,j,n,tem,total_money,a,b;
    while(scanf("%d", &n)==1)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d", &tem);
            v.push_back(tem);
        }
        scanf("%d", &total_money);

        sort(v.begin(),v.end());
        int sum;
        int minv=oo,minas;
        for(i=0;i<(int)v.size();i++)
        {
            for(j=i+1;j<(int)v.size();j++)
            {
                sum=v[i]+v[j];
                if(total_money==sum)
                {
                    minas=abs(v[i]-v[j]);
                    if(minv>minas)
                    {
                        a=v[i]; b=v[j];
                    }
                }
            }
        }
        int x=min(a,b);
        int y=max(a,b);
        printf("Peter should buy books whose prices are %d and %d.\n\n", x,y);

        v.clear();
    }

    return 0;
}
