#include<stdio.h>
int ispalindrome(int n ,int rev)
{
	
	if(n==0)
	{
		return rev;
	}
	else
	{
		return(ispalindrome(n/10,rev*10+n%10));
	}
}
int main()
{
	int x,result;
	printf("enter a number:");
	scanf("%d",&x);
	result= ispalindrome(x,0);
	if(result==x)
	{
		printf("%d is palindrome",x);
	}
	else
	{
		printf("%d is not palindrome",x);
	}
}
