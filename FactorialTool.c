#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{

    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    int result = 1;

    for (int i = 1; i < n; i++)
    {
        result = result * (i + 1);
    }

    printf("Factorial of given number : %d", result);

    return 0;
}