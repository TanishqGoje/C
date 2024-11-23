#include <stdio.h>

int prev1 = 1;
int prev2 = 0;

void fib(int n)
{
    if (n < 3)
    {
        return;
    }

    int fn = prev1 + prev2;
    prev2 = prev1;
    prev1 = fn;
    printf("%d ", fn);

    fib(n - 1);
}

void printFib(int n)
{
    if (n < 1)
    {
        printf("Invalid number of terms\n");
    }
    else if (n == 1)
    {
        printf("%d ", 0);
    }
    else if (n == 2)
    {
        printf("%d %d", 0, 1);
    }
    else
    {
        printf("%d %d ", 0, 1);
        fib(n);
    }
}

int main()
{
    int n = 9; // Change n to the desired number of terms
    printFib(n);
    return 0;
}