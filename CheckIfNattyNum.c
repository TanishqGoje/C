#include <stdio.h>
#include <math.h>

int main()
{

    int iNum;
    printf("Enter a number : ");
    scanf("%d", &iNum);

    if (iNum >= 1)
    {
        printf("This is a natural number");
    }
    else if (iNum < 1)
    {
        printf("This is not a natural number");
    }
    else
    {
        printf("Invalid");
    }

    return 0;
}