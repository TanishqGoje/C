#include <stdio.h>
#include <math.h>

// Cubing Tool

int main()
{

    printf("Cubing Tool\n");

    float fNum;
    printf("Enter a Number: \n");
    scanf("%f", &fNum);

    printf("Result: \n%f", pow(fNum, 3));

    return 0;
}

/*
    Line 10-12: Scans for number given by the user
    Line 14: Cubes the number and prints the result
*/