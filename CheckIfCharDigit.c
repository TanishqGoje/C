#include <stdio.h>
#include <math.h>

// Checking if a character is digit or not

int main()
{

    int x;
    printf("Enter a character: \n");
    scanf("%d", &x);
    if ("%d", x <= 9 && x >= 0)
    {
        printf("The character is a digit");
    }
    else
    {
        printf("The character is not a digit");
    }

    return 0;
}