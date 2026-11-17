#include <stdio.h>
#include <math.h>

int countDigits(int n)
{
    if (n == 0)
    {
    	 return 0;
	}
	else
	{
		return 1 + countDigits(n / 10);	
	}   
}

int armstrongSum(int n, int digits)
{
    if (n == 0)
    {
    	return 0;	
	}
    else
	{
	 	return pow(n % 10, digits) + armstrongSum(n / 10, digits);
	}      
}

int main()
{
    int num, digits, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    digits = countDigits(num);
    sum = armstrongSum(num, digits);

    if (sum == num)
    {
    	printf("%d is an Armstrong number.\n", num);
	}    
    else
    {
    	printf("%d is not an Armstrong number.\n", num);
	}
}
