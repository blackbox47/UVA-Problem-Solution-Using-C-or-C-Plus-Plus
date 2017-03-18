#include<stdio.h>
#include<string.h>
#include<vector>

using namespace std;

char str[50];
int main(void)
{
    vector<int>v;
    vector<int>ans;
    int i,j,len;
    char c;
    while(scanf("%s", &str)==1)
    {
        len=strlen(str);

        for(i=0;i<len;i++)
        {
            if(str[i]=='B'||str[i]=='F'||str[i]=='P'||str[i]=='V') v.push_back(1);
            else if(str[i]=='C'||str[i]=='G'||str[i]=='J'||str[i]=='K'||str[i]=='Q'||str[i]=='S'||str[i]=='X'||str[i]=='Z')
            {
                v.push_back(2);
            }
            else if(str[i]=='D'||str[i]=='T') v.push_back(3);
            else if(str[i]=='L') v.push_back(4);
            else if(str[i]=='M'||str[i]=='N') v.push_back(5);
            else if(str[i]=='R') v.push_back(6);
            else v.push_back(0);
        }

        c=-1;
        for(i=0;i<(int)v.size();i++)
        {
            if(v[i]==c)
            {
                c=v[i];
            }
            else
            {
                c=v[i];
                ans.push_back(c);
            }
        }

        for(i=0;i<(int)ans.size();i++)
        {
            if(ans[i]!=0) printf("%d", ans[i]);
        }
        printf("\n");

        memset(str,0,sizeof(str));
        v.clear();
        ans.clear();
    }

    return 0;
}
