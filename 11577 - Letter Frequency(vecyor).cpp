#include<stdio.h>
#include<vector>
#include<stack>
#include<string.h>
#include<iostream>
#include<ctype.h>

using namespace std;
char str[1000];
int arr[260];
int main(void)
{
    int i,len,j,max;
    vector<char>v;
    char c;
    int test,qq;
    scanf("%d%c", &test,&c);
    for(qq=1;qq<=test;qq++)
    {
        gets(str);
        len=strlen(str);
        for(i=0;i<len;i++) str[i]=tolower(str[i]);
        for(i=0;i<len;i++)
        {
            arr[str[i]]++;
        }
        max=0;
        for(j='a';j<='z';j++)
        {
            if(max<arr[j]) max=arr[j];
        }
        for(j='a';j<='z';j++)
        {
            if(max==arr[j])
            {
                v.push_back(j);
            }
        }
        int k;
        for(k=0;k<(int)v.size();k++)
        {
            printf("%c", v[k]);
        }
        printf("\n");
        v.clear();
        memset(str,0,sizeof(str));
        memset(arr,0,sizeof(arr));
    }

    return 0;
}
