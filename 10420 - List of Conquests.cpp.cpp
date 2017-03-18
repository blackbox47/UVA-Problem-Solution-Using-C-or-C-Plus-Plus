#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
#include<iostream>

using namespace std;

#define mp make_pair

char str[100],arr[100];
vector<string>v;
vector<pair <int,string> >pis;
string aa;

int main(void)
{
    int n,i,j,cnt;
    char c;
    while(scanf("%d", &n)==1)
    {
        for(int k=0;k<n;k++)
        {
            if(k==0) scanf("%c", &c);
            gets(str);
            int len=strlen(str);
            j=0;
            for(i=0;i<len;i++)
            {
                if(str[i]==' ') break;
                else
                {
                    arr[j]=str[i];
                    j++;
                }
            }
            aa=arr;
            v.push_back(aa);
            aa.clear();
            memset(arr,0,sizeof(arr));
            memset(str,0,sizeof(str));
        }

        sort(v.begin(),v.end());

        aa=v[0]; cnt=1;
        for(i=1;i<(int)v.size();i++)
        {
            if(aa==v[i])
            {
                cnt++;
            }
            else
            {
                pis.push_back( mp(cnt,aa) );
                cnt=1;
            }
            aa=v[i];
        }
        pis.push_back( mp(cnt,aa) );

        for(i=0;i<(int)pis.size();i++)
        {
            cout<<pis[i].second;
            printf(" %d\n", pis[i].first);
        }

        v.clear();
        pis.clear();
        memset(arr,0,sizeof(arr));
    }

    return 0;
}

//()#&
