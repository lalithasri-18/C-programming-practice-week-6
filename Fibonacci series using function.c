#include <stdio.h>
void fibonacci(int n)
{
    int f = 0, s = 1, t, i;
    if (n >= 1)
        printf("%d ", f);

    if (n >= 2)
        printf("%d ", s);

    for (i = 3; i <= n; i++)
    {
        t = f + s;
        printf("%d ", t);
        f=s;
        s=t;
    }
}

int main()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}

