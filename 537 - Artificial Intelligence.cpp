#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
#include<map>
#include<queue>
#include<stack>
#include<iostream>
#include<string>
#include<math.h>
#include<set>
#include <sstream>

using namespace std;

#define pb(b) push_back(b);
#define oo (1<<29)
#define ll long long
#define mp(a,b) make_pair(a,b)
#define PI  2.0*acos(0.0)



//set<ll>s;
//set<ll>:: iterator it;

///int rr[]= {-1,-1,0,0,1,1};
///int cc[]= {-1,0,-1,1,0,1};
///int rr[]= {0,0,1,-1};/*4 side move*/
///int cc[]= {-1,1,0,0};/*4 side move*/
///int rr[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
///int cc[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
///int rr[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
///int cc[]={2,-2,1,-1,2,-2,1,-1};/*night move*/

char str[1000],Iarr[100],Uarr[100],Parr[100];

int main(void)
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int i,j,sz,k,cas,Iflag,Pflag,Uflag,test;
    double I,P,U;
    char cchh;
    scanf("%d", &cas);
    scanf("%c", &cchh);
    test=1;
    while(cas--)
    {
        gets(str);
        sz=strlen(str);
        Iflag=0,Pflag=0,Uflag=0;
        I=0; P=0; U=0;
        for(i=0;i<sz;i++)
        {
            if(str[i]=='I' && str[i+1]=='=')
            {
                Iflag=1;
                int k=0;
                for(j=i+2; ;j++)
                {

                    if( (str[j]>='0' && str[j]<='9') || str[j]=='.' )
                    {
                        Iarr[k]=str[j];
                        k++;
                    }
                    else break;
                }
                I=(double)atof(Iarr);
                if(str[j]=='M') I=I*1000000.0;
                else if(str[j]=='k') I=I*1000.0;
                else if(str[j]=='m') I=I/1000.0;
            }
            else if(str[i]=='U' && str[i+1]=='=')
            {
                Uflag=1;
                int k=0;
                for(j=i+2; ;j++)
                {

                    if( (str[j]>='0' && str[j]<='9') || str[j]=='.' )
                    {
                        Uarr[k]=str[j];
                        k++;
                    }
                    else break;
                }
                U=(double)atof(Uarr);
                if(str[j]=='M') U=U*1000000.0;
                else if(str[j]=='k') U=U*1000.0;
                else if(str[j]=='m') U=U/1000.0;
            }
            else if(str[i]=='P' && str[i+1]=='=')
            {
                Pflag=1;
                int k=0;
                for(j=i+2; ;j++)
                {

                    if( (str[j]>='0' && str[j]<='9') || str[j]=='.' )
                    {
                        Parr[k]=str[j];
                        k++;
                    }
                    else break;
                }
                P=(double)atof(Parr);
                if(str[j]=='M') P=P*1000000.0;
                else if(str[j]=='k') P=P*1000.0;
                else if(str[j]=='m') P=P/1000.0;
            }
        }

        printf("Problem #%d\n", test);
        if(Iflag==1 && Uflag==1)
        {
            P=U*I;
            printf("P=%.2lfW\n", P);
        }
        else if(Iflag==1 && Pflag==1)
        {
            U=P/I;
            printf("U=%.2lfV\n", U);
        }
        else if(Uflag==1 && Pflag==1)
        {
            I=P/U;
            printf("I=%.2lfA\n", I);
        }
        printf("\n");

        memset(Iarr,0,sizeof(Iarr));
        memset(Uarr,0,sizeof(Uarr));
        memset(Parr,0,sizeof(Parr));
        test++;
    }

    return 0;
}
