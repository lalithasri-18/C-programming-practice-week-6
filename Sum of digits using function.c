#include <stdio.h>

int sumofdigits(int n)
{
    int sum = 0,rem;
    while (n != 0)
    {
    	rem=n%10;
        sum = sum + rem;
        n = n / 10;
    }
    return sum;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of digits = %d\n", sumofdigits(n));

    return 0;
}

