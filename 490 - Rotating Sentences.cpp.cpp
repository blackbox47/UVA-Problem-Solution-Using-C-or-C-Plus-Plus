#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

char str[105][105],arr[105];
//vectoe<string>v;

int main(void)
{
    int i,j,len,cnt,mx;
    for(i=0;i<105;i++) for(j=0;j<105;j++) str[i][j]=' ';
    cnt=0; mx=0;
    while(gets(arr))
    {
        len=strlen(arr);
        mx=max(mx,len);
        for(i=0;i<len;i++)
        {
            str[cnt][i]=arr[i];
        }
        cnt++;
//        if(cnt==3) break;
    }

    int var=0;
    for(i=0;i<mx;i++)
    {
        for(j=cnt-1;j>=0;j--)
        {
            printf("%c", str[j][var]);
        }
        printf("\n");
        var++;
    }

    return 0;
}

//()#&
