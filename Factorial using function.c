#include <stdio.h>

long long int factorial(int n)
{
    long long int fact = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not possible\n");
        return 0;
    }

    printf("Factorial of %d = %lld\n", n, factorial(n));

    return 0;
}

