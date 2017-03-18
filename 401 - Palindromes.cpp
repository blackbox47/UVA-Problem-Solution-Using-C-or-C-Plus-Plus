#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define mx 1000000

char str[mx],arr[mx],str1[mx];
int revs(int len);
int change(int len);
int mipa(int len);
void sett(void);
int main(void)
{
//    freopen("Tell10.txt","r",stdin);
    int i,j,len,p,q,r,p1;
    while(gets(str1))
    {
        len=strlen(str1);
        for(i=0;i<len;i++)
        {
            if(str1[i]=='0') str[i]='O';
            else if(str1[i]=='O') str[i]='O';
            else str[i]=str1[i];
        }
        r=mipa(len);
        p=revs(len);
        if(p==1 && r==0)
        {
            printf("%s -- is a regular palindrome.\n\n", str1);
        }
        else if(r==1 && p==1)
        {
            q=change(len);
            if(q==0) printf("%s -- is a mirrored palindrome.\n\n", str1);
        }
        else if(r==0)
        {
            q=change(len);
            p=revs(len);
            if(q==1 && p==1) printf("%s -- is a mirrored string.\n\n", str1);
            else printf("%s -- is not a palindrome.\n\n", str1);
        }
        sett();
    }

    return 0;
}

int revs(int len)
{

    int i,j,p;
    for(i=len-1,j=0;i>=0;i--,j++)
    {
        arr[j]=str[i];
    }
    for(i=len-1,j=0;i>=0;i--,j++) str[j]=arr[i];
    p=strcmp(arr,str);

    if(p==0) return 1;
    else return 0;
}

int change(int len)
{
    int i,flag=0,fla1=0,fla2=0,fla3=0,fla4=0;
    for(i=0;i<len;i++)
    {
        if(str[i]=='E' && fla1==1)
        {
            str[i]='3'; flag=1;
            fla1=1;
        }
        else if(str[i]=='J' && fla2==1)
        {
            str[i]='L'; flag=1;
            fla2=1;
        }
        else if(str[i]=='L' && fla2==0)
        {
            str[i]='J'; flag=1;
        }
        else if(str[i]=='S' && fla3==1)
        {
            str[i]='2'; flag=1;
            fla3=1;
        }
        else if(str[i]=='Z' && fla4==1)
        {
            str[i]='5'; flag=1;
            fla4=1;
        }
        else if(str[i]=='2' && fla3==0)
        {
            str[i]='S'; flag=1;
        }
        else if(str[i]=='3' && fla1==0)
        {
            str[i]='E'; flag=1;
        }
        else if(str[i]=='5' && fla4==0)
        {
            str[i]='Z'; flag=1;
        }
    }

   return flag;
}

int mipa(int len)
{
    int i,count=0,flag;
    for(i=0;i<len;i++)
    {
        if(str[i]=='A' || str[i]=='H' || str[i]=='I' || str[i]=='M' || str[i]=='T'||str[i]=='U'||str[i]=='V'||str[i]=='W'|| str[i]=='X'||str[i]=='Y'||str[i]=='1'||str[i]=='8' || str[i]=='O')
        {
            flag=1;

        }
        else
        {
            flag=0;
            break;
            return flag;
        }
    }

    return flag;
}

void sett(void)
{
    memset(arr,0,sizeof(arr));
    memset(str,0,sizeof(str));
    memset(str1,0,sizeof(str1));

    return ;
}
