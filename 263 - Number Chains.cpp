#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
#define mx 100000

using namespace std;
char str[mx],str1[mx];
int re[mx];
int big,small;
int cp(void const *p,void const *q);
void myfun(void);
void sett(void);
int main(void)
{
    int i,j,len,dif,k,kl,count,var,flag,p;
    while(scanf("%s", &str)==1)
    {
        p=strcmp(str,"0");
        if(p==0) break;
        len=strlen(str);
        for(i=0;i<len;i++) str1[i]=str[i];
        myfun();
        k=0; kl=0;
        count=0;
        printf("Original number was %s\n", str);
        while(1)
        {
            count++;
            dif=big-small;
            printf("%d - %d = %d\n", big,small,dif);
            re[k]=dif;
            var=re[kl];
            flag=0;
            for(k=0;k<kl;k++)
            {
                if(re[k]==var)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1) break;
            sprintf(str1,"%d", dif);
            myfun();
            k++; kl++;
        }
        printf("Chain length %d\n\n", count);
        big=0; small=0;
    }

    return 0;
}

void myfun(void)
{
    int i,j,k,kl,len;
    len=strlen(str1);
    qsort(str1,len,sizeof(char), cp);
    big=atoi(str1);
    reverse(str1,str1+len);
    small=atoi(str1);
    memset(str1,0,sizeof(str1));

    return ;
}
int cp(void const *p,void const *q)
{
    return *(char *)q-*(char *)p;
}

void sett(void)
{
    memset(str,0,sizeof(str));
    memset(str1,0,sizeof(str1));

    return ;
}
