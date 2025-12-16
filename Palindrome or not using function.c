#include <stdio.h>

int palindrome(int n)
{
    int x = n, rev = 0, rem;
    x = n;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (x == rev)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (palindrome(n))
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");

    return 0;
}

