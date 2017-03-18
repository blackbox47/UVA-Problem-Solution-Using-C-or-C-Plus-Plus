#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<queue>
#include<iostream>
#include<algorithm>

using namespace std;

vector<string>v;

bool com(int x,int y);
void pre(void);

int main(void)
{
    int i,j;
    string aa;
    pre();

    while(cin>>aa)
    {
        int var=0;
        for(i=0;i<v.size();i++)
        {
            if(aa==v[i])
            {
                var=i+1;
                break;
            }
        }
        printf("%d\n", var);
        aa.size();
    }

    return 0;
}

//bool com(string x,string y)
//{
//    if(x.size()>y.size()) return 1;
//    else return 0;
//}

void pre(void)
{
    int i,j,k,l,m;
    string tem="";

    for(i=97;i<=122;i++)
    {
        tem=i;
        v.push_back(tem);
        tem.clear();
    }

    for(i=97;i<=122;i++)
    {
        for(j=i+1;j<=122;j++)
        {
            tem+=i; tem+=j;
            v.push_back(tem);
            tem.clear();
        }
    }
    for(i=97;i<=122;i++)
    {
        for(j=i+1;j<=122;j++)
        {
            for(k=j+1;k<=122;k++)
            {
                tem+=i; tem+=j; tem+=k;
                v.push_back(tem);
                tem.clear();
            }
        }
    }

    for(i=97;i<=122;i++)
    {
        for(j=i+1;j<=122;j++)
        {
            for(k=j+1;k<=122;k++)
            {
                for(l=k+1;l<=122;l++)
                {
                    tem+=i; tem+=j; tem+=k; tem+=l;
                    v.push_back(tem);
                    tem.clear();
                }
            }
        }
    }

    for(i=97;i<=122;i++)
    {
        for(j=i+1;j<=122;j++)
        {
            for(k=j+1;k<=122;k++)
            {
                for(l=k+1;l<=122;l++)
                {
                    for(m=l+1;m<=122;m++)
                    {
                        tem+=i; tem+=j; tem+=k; tem+=l; tem+=m;
                        v.push_back(tem);
                        tem.clear();
                    }
                }
            }
        }
    }

    return ;
}
