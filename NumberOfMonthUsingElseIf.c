#include <Stdio.h>

int main()
{
    int month;
    printf("Enter the number of month (1-12) : ");
    scanf("%d", &month);

    if (month == 1)
    {
        printf("The month is January");
    }
    else if (month == 2)
    {
        printf("The month is February");
    }
    else if (month == 3)
    {
        printf("The month is March");
    }
    else if (month == 4)
    {
        printf("The month is April");
    }
    else if (month == 5)
    {
        printf("The month is May");
    }
    else if (month == 6)
    {
        printf("The month is June");
    }
    else if (month == 7)
    {
        printf("The month is July");
    }
    else if (month == 8)
    {
        printf("The month is August");
    }
    else if (month == 9)
    {
        printf("The month is September");
    }
    else if (month == 10)
    {
        printf("The month is October");
    }
    else if (month == 11)
    {
        printf("The month is November");
    }
    else if (month == 12)
    {
        printf("The month is December");
    }
    else
    {
        printf("Month doesn't exist");
    }
    

    return 0;
}