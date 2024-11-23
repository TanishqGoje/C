#include <stdio.h>
#include <math.h>

int main()
{

    int iNum;
    printf("Enter a 2-digit number: \n");
    scanf("%d", &iNum);
    printf("%d", iNum > 9 && iNum < 100);

    return 0;
}