#include <stdio.h>

// Area of Circle

int main()
{

    printf("Area of Circle\n");

    float fRad;
    printf("Enter radius of circle: \n");
    scanf("%f", &fRad);

    printf("Area: \n%f", 3.14 * fRad * fRad);

    return 0;
}

/*
    Line 9-11: Scans for the value of radius entered by the user from Line 7
    Line 13: Prints the area of the circle using the formula pi*r^2
*/