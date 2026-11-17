#include<stdio.h>
int gcd(int a, int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}
int main()
{
	int x,y,result;
	printf("enter 2 numbers:");
	scanf("%d %d",&x,&y);
	result=gcd(x,y);
	printf("GCD of %d,%d is %d",x,y,result);
}
