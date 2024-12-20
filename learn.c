#include <stdio.h>

int fib(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

void main()
{
    int range = 5;
    for (int i = 1; i <= range; i++) {
        int s = fib(i);
        printf("%d ", s);
    }
}