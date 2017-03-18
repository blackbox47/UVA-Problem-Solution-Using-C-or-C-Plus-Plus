#include<stdio.h>
#include<string.h>
#include<string>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int arr[300],indx[300];
char ch[5],str[10050];
vector<string>v;
vector<int>vI;
string aa;

int main(void)
{
    int n,m,k,value,i,var,test,qq;
    char c;
    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        scanf("%d", &m);
        for(i=0;i<m;i++)
        {
            scanf("%s %d", &ch,&value);
            c=ch[0];
            arr[c]=value;
            vI.push_back(c);
        }
        scanf("%d", &k);
        for(i=0;i<=k;i++)
        {
            aa.clear();
            gets(str);
            aa=str;
            v.push_back(aa);
        }
        int j;
        for(i=0;i<(int)v.size();i++)
        {
            for(j=0;j<(int)v[i].size();j++)
            {
                indx[ v[i][j] ]++;
            }
        }

        int sum=0;
        for(i=0;i<(int)vI.size();i++)
        {
            sum+=indx[ vI[i] ]*arr[ vI[i] ];
        }
        int cent,dollar;
        var=sum/100;
        cent=sum-(var*100);

        if(cent<10) printf("%d.0%d$\n", var,cent);
        else printf("%d.%d$\n", var,cent);

        memset(arr,0,sizeof(arr));
        memset(str,0,sizeof(str));
        memset(indx,0,sizeof(indx));
        memset(ch,0,sizeof(ch));
        vI.clear();
        v.clear();
    }

    return 0;
}
