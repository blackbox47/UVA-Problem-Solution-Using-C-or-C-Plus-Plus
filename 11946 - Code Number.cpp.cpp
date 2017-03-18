#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<iostream>

using namespace std;

int main(void)
{
//    freopen("TELL.txt","w",stdout);
    int i,j,sz,test,qq;
    char c;
    string a,b,str;

    scanf("%d%c", &test,&c);
    for(qq=1;qq<=test;qq++)
    {
        while(getline(cin,str))
        {
            sz=str.size();
            if(sz==0) break;

            for(i=0;i<sz;i++)
            {
                if(str[i]=='0') printf("O");
                else if(str[i]=='1') printf("I");
                else if(str[i]=='2') printf("Z");
                else if(str[i]=='3') printf("E");
                else if(str[i]=='4') printf("A");
                else if(str[i]=='5') printf("S");
                else if(str[i]=='6') printf("G");
                else if(str[i]=='7') printf("T");
                else if(str[i]=='8') printf("B");
                else if(str[i]=='9') printf("P");
                else printf("%c", str[i]);
            }
            printf("\n");
        }
        if(qq!=test) printf("\n");

        str.clear();
    }

    return 0;
}

