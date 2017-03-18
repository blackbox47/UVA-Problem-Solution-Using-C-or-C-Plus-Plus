#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
    char str[800],arr[800];
    int i,len,len1,d,c,j,sum,digit,raj,y,v,nou;
    float x,pp,qq;
    while(gets(str))
    {
        gets(arr);
        len=strlen(str);
        sum=0;
        for(i=0;i<len;i++)
        {
            if( (str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') )
            {
                if(str[i]>='a' && str[i]<='z')
                {
                    str[i]=toupper(str[i]);
                }
                c=str[i]-64;
                sum+=c;
         //       printf("%d ", c);
            }
        }
       // printf("\n");
        //printf("%d\n", sum);
        for( ; ; )
        {
            raj=0;
            for( ; ; )
            {
                y=sum%10;
                raj+=y;
             //   printf("%d\n", y);
                v=sum/10;
                sum=v;
                if(sum<10)
                {
           //         printf("%d\n", sum);
                    break;
                }
            }
         //   printf("%d\n", raj+sum);
            sum=raj+sum;
            if( sum<10 ) break;
        }
        //printf("The sum is:%d\n", sum);
        //printf("\n");

        len1=strlen(arr);
        digit=0;
        for(j=0;j<len1;j++)
        {
            if( (arr[j]>='a' && arr[j]<='z') || (arr[j]>='A' && arr[j]<='Z') )
            {
                if(arr[j]>='a' && arr[j]<='z')
                {
                    arr[j]=toupper(arr[j]);
                }
                d=arr[j]-64;
                digit+=d;
          //      printf("%d ", d);
            }
        }
        //printf("\n");
        //printf("%d\n", digit);
        for( ; ; )
        {
            nou=0;
            for( ; ; )
            {
                y=digit%10;
                nou+=y;
              //  printf("%d\n", y);
                v=digit/10;
                digit=v;
                if(digit<10)
                {
            //        printf("%d\n", digit);
                    break;
                }
            }
          //  printf("%d\n", nou+digit);
            digit=nou+digit;
            if( digit<10 ) break;
        }
        //printf("The digit is:%d\n", digit);
        //printf("\n");
        qq=sum*1.0;
        pp=digit*1.0;
        //printf("%f\n", pp);
       // printf("%f\n", qq);
        if(pp>qq)
        {
            x=qq/pp;
            //printf("%f\n", x);
        }
        else if(qq>pp)
        {
            //printf("gf");
            x=pp/qq;
           // printf("%f\n", x);
        }
        else x=pp/qq;

        printf("%.2f %%\n", x*100.0);
    }

    return 0;
}

