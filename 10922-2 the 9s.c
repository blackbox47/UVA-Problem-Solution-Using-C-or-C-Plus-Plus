#include<stdio.h>
#include<string.h>

int main(void)
{
    int i,len,sum,arr[1000],uu,count,k,x,j,kl,lala;
    char str[10000];
    while(scanf("%s", &str)==1)
    {
        lala=strcmp(str,"0");
        if(!lala) break;
        if( !(strcmp(str,"9")) )
        {
            printf("9 is a multiple of 9 and has 9-degree 1.\n");
            continue;
        }
        len=strlen(str);
        sum=0;
        for(i=0;i<len;i++)
        {
            sum+=str[i]-48;
        }
        if(sum%9!=0) printf("%s is not a multiple of 9.\n", str);
       else
       {
           arr[0]=sum;
           uu=sum;
           j=1;
           while(1)
           {
               count=0;
                for(k=0; ;k++)
                {
                    x=uu%10;
                    count+=x;
                    uu/=10;
                    if(uu<10) break;
                }
                count+=uu;
                arr[j]=count;
                j++;
                uu=count;
                if(uu<=9) break;
           }
           kl=0;
           for(i=0;i<j;i++)
           {
               if(arr[i]%9!=0) break;
               if(arr[i]%9==0)
               {
                   kl++;
               }
           }
           printf("%s is a multiple of 9 and has 9-degree %d.\n", str,kl);
       }
    }

    return 0;
}
