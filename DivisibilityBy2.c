#include <stdio.h>
#include <math.h>

int main()
{

    int iNum;
    printf("Enter a Number: \n");
    scanf("%d", &iNum);

    if (iNum % 2 == 0)
    {
        printf("This number is divisible by 2");
    }
    if (iNum % 2 != 0)
    {
        printf("This number is not divisible by 2");
    }

    return 0;
}