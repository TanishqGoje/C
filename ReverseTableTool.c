#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{

    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    for (int i = 10; i >= 1; i--)
    {
        int product = n * i;
        printf("%d X %d = %d\n", n, i, product);
    }

    return 0;
}