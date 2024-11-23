#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{

    int n;
    printf("Enter 'n' value : ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += 1;
    }

    printf("sum is %d \n", sum);

    for (int i = n; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}