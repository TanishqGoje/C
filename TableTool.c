#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{

    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        int product = n * i;
        printf("%d X %d = %d\n", n, i, product);
    }

    return 0;
}