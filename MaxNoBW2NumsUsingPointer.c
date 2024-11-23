#include <stdio.h>

int main()
{
    int num1, num2;
    int *ptr1, *ptr2;

    // Assigning the addresses of num1 and num2 to the pointers
    ptr1 = &num1;
    ptr2 = &num2;

    // Taking input from the user
    printf("Enter two numbers : ");
    scanf("%d %d", ptr1, ptr2);

    // Comparing the values pointed by ptr1 and ptr2
    if (*ptr1 > *ptr2)
    {
        printf("The maximum number is : %d\n", *ptr1);
    }
    else
    {
        printf("The maximum number is : %d\n", *ptr2);
    }

    return 0;
}