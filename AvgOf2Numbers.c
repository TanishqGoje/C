#include <stdio.h>
#include <math.h>

// Average of 3 numbers

int main()
{

    float x, y, z;
    printf("Enter 3 values : \n");
    scanf("%lf %lf %lf", &x, &y, &z);

    printf("Average: %f", (x + y + z) / 3);

    return 0;
}