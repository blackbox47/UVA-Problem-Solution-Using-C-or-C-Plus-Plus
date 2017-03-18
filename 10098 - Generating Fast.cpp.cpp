#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

vector<char>v;

int main(void)
{
    int test,qq,i;
    char str[15];
    string aa;
    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        scanf("%s", &str);
        int len=strlen(str);
        for(i=0;i<len;i++)
        {
            v.push_back(str[i]);
        }
        sort(v.begin(),v.end());

        for(i=0;i<(int)v.size();i++) printf("%c", v[i]);
        printf("\n");

        while(next_permutation(v.begin(),v.end()))
        {
            for(i=0;i<(int)v.size();i++) printf("%c", v[i]);
            printf("\n");
        }
        printf("\n");
        v.clear();
    }

    return 0;
}

//()#&
