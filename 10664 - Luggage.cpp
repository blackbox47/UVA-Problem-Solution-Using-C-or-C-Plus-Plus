#include<stdio.h>
#include<string.h>
#include<vector>
#include<math.h>
#include<stdlib.h>
#include<algorithm>
#include<string>
#include<iostream>
#include<sstream>
#define oo (1<<25)

using namespace std;

int str[65000];

int main(void)
{
    vector<int>v;
    int i,j,sum,var,tem,mn,minas,test,qq,count,flag;
    string arr;
    stringstream ss;
    char c;
    scanf("%d%c", &test,&c);
    while(test--)
    {
        getline(cin,arr);
        ss<<arr;
        sum=0;
        while(ss>>qq)
        {
            v.push_back(qq);
            sum+=qq;
        }

        sort(v.begin(),v.end());

        str[0]=1; flag=0; mn=oo;
        for(i=0;i<(int)v.size();i++)
        {
            for(j=sum;j>=0;j--)
            {
                if(str[j]==1)
                {
                    var=j+v[i];
                    if(var<=sum)
                    {
                        str[var]=1;
                        tem=sum-var;
                        minas=abs(tem-var);
                        if(mn>minas)
                        {
                            mn=minas;
                            if(mn==0)
                            {
                                flag=1;
                                break;
                            }
                        }
                    }
                }
            }
            if(flag==1) break;
        }
        if(flag==1) printf("YES\n");
        else printf("NO\n");

        v.clear();
        ss.clear();
        arr.clear();
        memset(str,0,sizeof(str));
    }

    return 0;
}

