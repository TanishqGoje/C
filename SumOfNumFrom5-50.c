#include <stdio.h>
#include <math.h>

int main()
{

    int sum = 0;

    for (int i = 5; i <= 50; i++)
    {
        sum = sum + i;
    }

    printf("Sum : %d", sum);

    return 0;
}