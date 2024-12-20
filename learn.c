#include <stdio.h>

int fib(int n)
{  // fibo recurcive code
    if (n <= 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

void triange() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

void upsideTriange() {
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

void abcd() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void main()
{
    int range = 5;
    for (int i = 1; i <= range; i++) {
        int s = fib(i);
        printf("%d ", s);
    }
    printf("\n");
    triange();
    printf("\n");
    upsideTriange();
    printf("\n");
    abcd();
}