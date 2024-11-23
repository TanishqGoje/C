#include <stdio.h>

void tempCheck(float n)
{

    if (n >= 30)
    {
        printf("HOT 🥵");
    }
    else if (n < 30)
    {
        printf("COLD 🥶");
    }
    else
    {
        printf("Invalid");
    }
}

int main()
{

    float n;
    printf("Enter temperature in Celsius : ");
    scanf("%f", &n);
    tempCheck(n);

    return 0;
}