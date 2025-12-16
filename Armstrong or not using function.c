#include <stdio.h>

int armstrong(int n)
{
    int rem, sum = 0, x;
    x = n;

    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }

    if (sum == x)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a value of n: ");
    scanf("%d", &n);

    if (armstrong(n))
        printf("It is an armstrong number");
    else
        printf("It is not an armstrong number");

    return 0;
}

