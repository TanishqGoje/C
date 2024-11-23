#include <stdio.h>

// Area of Square

int main()
{

    printf("Area of Square\n");

    float iSide;
    printf("Enter the value of side of the square: \n");
    scanf("%f", &iSide);

    printf("Area: \n%f", iSide * iSide);

    return 0;
}

/*
    Line 9-11: Scans for the value of side of square given by user
    Line 13: Prints the area of square using the formula side x side
*/