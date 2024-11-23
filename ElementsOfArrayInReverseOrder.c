#include <stdio.h>

int main()
{

    // Initialize the array
    int arr[] = {1, 2, 3, 4, 5};
    // Calculate the length of the array
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: \n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Array in Reverse Order: \n");
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}