#include <stdio.h>

float tempConv(float celsius);

int main()
{
    printf("Fahrenheit : %f\n", tempConv(37));
    return 0;
}

float tempConv(float celsius)
{
    float far = celsius * (9.0 / 5.0) + 32;
    return far;
}