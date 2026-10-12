#include <stdio.h>

void func(void)
{
    int x;

    printf("func x is at %p\n", (void *)&x);
}

int main(void)
{
    int x;
    printf("main x is at %p\n", (void *)&x);
    func();

    return 0;
}