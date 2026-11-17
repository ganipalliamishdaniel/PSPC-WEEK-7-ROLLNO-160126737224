#include <stdio.h>

int perfectSum(int num, int i)
{
    if (i == num)
    {
        return 0;
    }
    else if (num % i == 0)
    {
        return i + perfectSum(num, i + 1);
    }
    else
    {
        return perfectSum(num, i + 1);
    }
}

int main()
{
    int num, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    sum = perfectSum(num, 1);

    if (sum == num)
    {
        printf("%d is a Perfect Number.\n", num);
    }
    else
    {
        printf("%d is not a Perfect Number.\n", num);
    }

    return 0;
}
