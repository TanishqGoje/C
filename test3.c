#include <stdio.h>

int main()
{
    float num1;
    printf("Enter a number : ");
    scanf("%f", &num1);

    float num2;
    printf("Enter another number : ");
    scanf("%f", &num2);

    printf("Sum of the numbers : %f", num1 + num2);

    return 0;
}