#include<stdio.h>

int countDigits()
int main()
{
    int x, temp, r, sum=0;
    printf("Enter an positive number : ");
    scanf("%d", &x);

    temp = x;

    while (x>0)
    {
        r = x%10;
        sum = sum + r;
        x = x%10;
    }

    printf("The sum of the digits of the number is %d", sum);
    if (sum = temp)
    {

    }
    
    
    return 0;
}