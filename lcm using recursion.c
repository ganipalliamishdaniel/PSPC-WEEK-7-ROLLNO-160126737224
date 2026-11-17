#include<stdio.h>
	int gcd(int a,int b)
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
	int lcm(int a,int b)
	{
		if(a==0 || b==0)
		{
			return 0;
		}
		else
		{
			return((a*b)/gcd(a,b));
		}
	}
	int main()
	{
		int x,y,result;
	printf("enter 2 numbers:");
	scanf("%d %d",&x,&y);
	result=lcm(x,y);
	printf("LCM of %d,%d is %d",x,y,result);
	}
