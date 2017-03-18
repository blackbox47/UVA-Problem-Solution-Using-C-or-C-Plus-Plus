#include<stdio.h>
#include<math.h>

int count=0;
void gc(int x,int y);
int main(void)
{
	int a,i,arr[100000],j,p,sum;
	double n,ww;
	while(scanf("%d", &a)==1)
	{
	    if(a==0) break;
        for(i=0;i<a;i++) scanf("%d", &arr[i]);
        sum=0;
        for(j=0; ;j++)
        {
            p=arr[0];
            for(i=1;i<a;i++)
            {
                sum++;
                gc(p,arr[i]);
            }
            for(i=0;i<a;i++) arr[i]=arr[i+1];
            a=a-1;
            if(a<=1) break;
        }
        if(count!=0)
        {
            ww=(6.0*sum)/count;
            n=sqrt(ww);
            printf("%lf\n", n);
        }
        else if(count==0)
        {
            printf("No estimate for this data set.\n");
        }
        count=0;
	}

	return 0;
}

void gc(int x,int y)
{
	int a,flag,i,c;
	flag=1;
	for(i=0; ;i++)
	{
		c=y%x;
		if(c==0) break;
		if(c==1)
		{
			flag=0; break;
		}
		y=x;
		x=c;
	}
	if(flag==0)
	{
		x=c;
	}
	if(x==1) count++;

}
