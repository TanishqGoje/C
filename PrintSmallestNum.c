#include <stdio.h>
#include <math.h>

// Program to print the smallest number

int main()
{

    int x, y, z;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d", &x, &y, &z);
    if (x < y && x < z)
    {
        printf("Smallest number: %d", x);
    }
    else if (y < x && y < z)
    {
        printf("Smallest number: %d", y);
    }
    else
    {
        printf("Smallest number: %d", z);
    }

    return 0;
}