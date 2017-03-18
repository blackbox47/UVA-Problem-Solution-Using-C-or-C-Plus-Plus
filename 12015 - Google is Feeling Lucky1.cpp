#include<stdio.h>
#include<algorithm>
#include<string>
#include<string.h>
#include<iostream>

using namespace std;

int cp(void const *p,void const *q);

typedef struct
{
    string name;
    int value;
}data;
data websites[15],temp[15];

int main(void)
{
    int i,j,var,tem,test,qq;
    scanf("%d", &test);
    for(qq=1;qq<=test;qq++)
    {
        for(i=0;i<10;i++)
        {
            cin>>websites[i].name;
            scanf("%d", &websites[i].value);
        }

        for(i=0;i<10;i++)
        {
            temp[i].name=websites[i].name;
            temp[i].value=websites[i].value;
        }

        qsort(websites,10,sizeof(data),cp);

        tem=websites[0].value;


        printf("Case #%d:\n", qq);
        for(i=0;i<10;i++)
        {
            if(temp[i].value==tem)
            {
                cout<<temp[i].name;
                printf("\n");
            }
        }
    }

    return 0;
}

int cp(void const *p,void const *q)
{
    data *a,*b;

    a=(data *)p; b=(data *)q;

    return (b->value - a->value);
}
