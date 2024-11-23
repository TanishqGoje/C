#include <stdio.h>

int power(int base, unsigned int exponent)
{
    int result = 1;
    for (unsigned int i = 0; i < exponent; ++i)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int base = 2;
    unsigned int exponent = 3;
    printf("Result: %d\n", power(base, exponent));
    return 0;
}