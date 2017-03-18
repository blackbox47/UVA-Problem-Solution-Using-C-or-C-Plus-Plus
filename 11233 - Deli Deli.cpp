#include<stdio.h>
#include<vector>
#include<string.h>
#include<string>
#include<iostream>
#define max_n 110

using namespace std;

vector<string>v;

int main(void)
{
//    freopen("TELL.txt","w",stdout);
    int m,n,i,j,flag,sz,k;
    string str,arr;
    scanf("%d %d", &m,&n);

    for(i=1;i<=2*m;i++)
    {
        cin>>str;
        v.push_back(str);
    }
    for(i=1;i<=m;i++)
    {
        cout<<v[1];
        printf("\n");
    }


    for(k=1;k<=n;k++)
    {
        cin>>arr;

        flag=0;
        for(i=0;i<(int)v.size();i++)
        {
            if(arr==v[i])
            {
                flag=1;
                break;
            }
            i++;
        }

        if(flag==1)
        {
            cout<<v[i+1];
            printf("\n");
        }

        else if(flag==0)
        {
            sz=arr.size();
            if(arr[sz-1]=='y' && ( arr[sz-2]!='a'&& arr[sz-2]!='e' && arr[sz-2]!='i' && arr[sz-2]!='o' && arr[sz-2]!='u')  )
            {
                for(i=0;i<sz-1;i++) cout<<arr[i];
                printf("ies\n");

            }
            else if(arr[sz-1]=='o' || arr[sz-1]=='s' || arr[sz-1]=='x')
            {
                for(i=0;i<sz;i++) cout<<arr[i];
                printf("es\n");
            }
            else if( (arr[sz-1]=='h'&& arr[sz-2]=='c') || (arr[sz-1]=='h'&& arr[sz-2]=='s') )
            {
                for(i=0;i<sz;i++) cout<<arr[i];
                printf("es\n");
            }
            else
            {
                for(i=0;i<sz;i++) cout<<arr[i];
                printf("s");
                printf("\n");
            }
        }
    }

    return 0;
}
