#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int strongSum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return factorial(n % 10) + strongSum(n / 10);
    }
}

int main()
{
    int num, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    sum = strongSum(num);

    if (sum == num)
    {
        printf("%d is a Strong Number.\n", num);
    }
    else
    {
        printf("%d is not a Strong Number.\n", num);
    }

    return 0;
}
