#include <stdio.h>

// Perimeter of Rectangle

int main()
{

    printf("Area of Rectangle");

    float fLength;
    printf("Enter length of rectangle : \n");
    scanf("%f", &fLength);

    float fBreadth;
    printf("Enter bredath of rectangle : \n");
    scanf("%f", &fBreadth);

    printf("Perimeter: \n%f", 2 * (fLength + fBreadth));

    return 0;
}

/*
    Line 9-11: Scans for length given by the user
    Line 13-15: Scans for breadth given by the user
    Line 17: Prints the perimeter of the rectangle using the formula 2(l+b)
*/
