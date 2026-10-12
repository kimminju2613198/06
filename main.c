#include <stdio.h>

long long get_integer(void);
long long factorial(int n);
long long combination(int n, int r);

int main(void)
{
    int n, r;
    long long result;

    printf("Enter n: ");
    n = (int)get_integer();

    printf("Enter r: ");
    r = (int)get_integer();

    if (n < 0 || r < 0 || r > n || n > 20)
    {
        printf("Invalid input.\n");
        return 1;
    }

    result = combination(n, r);

    printf("C(%d, %d) = %lld\n", n, r, result);

    return 0;
}

long long get_integer(void)
{
    long long num;

    scanf("%lld", &num);

    return num;
}

long long factorial(int n)
{
    long long res = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        res *= i;
    }

    return res;
}

long long combination(int n, int r)
{
    return factorial(n) /
           (factorial(n - r) * factorial(r));
}