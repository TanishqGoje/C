#include<stdio.h>

int main()
{
    float pin1, pin2;
    printf("Enter 1st pin : ");
    scanf("%f", &pin1);
    printf("Enter 2nd pin : ");
    scanf("%f", &pin2);
    printf("Final pin is : %.1f", pin1 + pin2);

    return 0;
}