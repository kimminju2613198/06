#include <stdio.h>

int sumTwo(int a, int b)
{
    return a + b;
}

int square(int n)
{
    return n * n;
}

int get_max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main(void)
{
    int a = 3;
    int b = 5;

    printf("sum = %d\n", sumTwo(a, b));
    printf("square = %d\n", square(a));
    printf("max = %d\n", get_max(a, b));

    return 0;
}