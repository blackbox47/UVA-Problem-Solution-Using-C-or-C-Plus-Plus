#include<stdio.h>
#include<string.h>

char arr[150];
int str[150],stack[150];
int top;
void pop(void);
void push(int p);
void convert(int len);
int main(void)
{
    int i,len,j,test,qq;
    char c;
    scanf("%d%c", &test,&c);
    for(qq=1;qq<=test;qq++)
    {
        gets(arr);
        len=strlen(arr);
        convert(len);
        for(i=0;i<len;i++)
        {
            if(i==0)
            {
                push(str[i]);
            }
            else if(stack[top]==1 && str[i]==2)
            {
                pop();
            }
            else if(stack[top]==3 && str[i]==4)
            {
                pop();
            }
            else
            {
                push(str[i]);
            }
        }
        if(top==0) printf("Yes\n");
        else printf("No\n");
        memset(arr,0,sizeof(arr));
        memset(str,0,sizeof(str));
        memset(stack,0,sizeof(stack));
        top=0;
    }

    return 0;
}

void push(int p)
{
    top++;
    stack[top]=p;

    return ;
}

void pop(void)
{
    top--;

    return ;
}

void convert(int len)
{
    int i,k;
    for(i=0,k=0;i<len;i++,k++)
    {
        if(arr[i]=='(') str[k]=1;
        else if(arr[i]==')') str[k]=2;
        else if(arr[i]=='[') str[k]=3;
        else if(arr[i]==']') str[k]=4;
    }

    return ;
}
//#,&,()
