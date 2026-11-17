#include<stdio.h>
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return(n*fact(n-1));
	}
}
int main()
{
	int x,result;
	printf("enter a number:");
	scanf("%d",&x);
	result=fact(x);
	printf("%d ! = %d",x,result);
}
