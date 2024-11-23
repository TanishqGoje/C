#include <stdio.h>
#include <math.h>

// Result Checker

int main()
{

    int iMarks;
    printf("Enter your marks (0-100):\n");
    scanf("%d", &iMarks);

    /*if (iMarks >= 30 && iMarks <= 100)
    {
        printf("You have passed\n");
    } else if (iMarks < 30 && iMarks >= 0)
    {
        printf("You have failed\n");
    } else {
        printf("Invalid Marks");
    }*/

    iMarks < 30 ? printf("You Failed") : printf("You Passed"); /*This is called a ternary operator*/

    return 0;
}