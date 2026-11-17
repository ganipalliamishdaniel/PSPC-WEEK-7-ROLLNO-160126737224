#include<stdio.h>
int mul(int a,int b)
{
	if(a==0||b==0)
	{
		return 0;
	}
	else if(b>0)
	{
		return(a+mul(a,b-1));
	}
	else
	{
		return(-a+mul(a,b+1));
	}
}
int main()
	{
		int x,y,result;
	printf("enter 2 numbers:");
	scanf("%d %d",&x,&y);
	result=mul(x,y);
	printf("%d * %d = %d",x,y,result);
	}
