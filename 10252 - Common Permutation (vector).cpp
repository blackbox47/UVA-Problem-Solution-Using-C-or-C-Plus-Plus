#include<stdio.h>
#include<stack>
#include<vector>
#include<algorithm>
#include<iostream>
#include<string.h>

using namespace std;
char str[10000],arr[10000],tem[10000],tem1[10000];

int main(void)
{
    vector<char>v;
    int i,len,len1,max,j,first,second,a;
    while(gets(str))
    {
        first=strlen(str);
        int k;
        k=0;
        for(i=0;i<first;i++)
        {
            if(str[i]!=' ')
            {
                tem[k]=str[i];
                k++;
            }
        }
        len=strlen(tem);
        gets(arr);
        second=strlen(arr);
        int j;
        j=0;
        for(a=0;a<second;a++)
        {
            if(arr[a]!=' ')
            {
                tem1[j]=arr[a];
                j++;
            }
        }
        len1=strlen(tem1);
        if(len>len1) max=len;
        else max=len1;
        for(k=0;k<max;k++)
        {
            for(j=0;j<max;j++)
            {
                if(tem[k]==tem1[j])
                {
                    v.push_back(tem1[j]);
                    tem1[j]='1';
                    break;
                }
            }
        }
        sort( v.begin(),v.end() );

        int q;
        for(q=0;q<(int)v.size();q++)
        {
            printf("%c", v[q]);
        }
        printf("\n");
        memset(arr,0,sizeof(arr));
        memset(str,0,sizeof(str));
        memset(tem,0,sizeof(tem));
        memset(tem1,0,sizeof(tem1));
        v.clear();
    }

    return 0;
}
