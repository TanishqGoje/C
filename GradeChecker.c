#include <stdio.h>
#include <math.h>

// Grade Checker

int main()
{

    int iMarks;
    printf("Enter your marks(0-100) : ");
    scanf("%d", &iMarks);

    if (iMarks < 30)
    {
        printf("Your grade : C");
    }
    else if (30 <= iMarks < 70)
    {
        printf("Your grade : B");
    }
    else if (70 <= iMarks < 90)
    {
        printf("Your grade : A");
    }
    else if (90 <= iMarks <= 100)
    {
        printf("Your grade : A+");
    }

    return 0;
}