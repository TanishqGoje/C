#include <stdio.h>

int main()
{

    int i = 5;
    int *ptr = &i;
    int **ptr = &ptr;

    printf("%d\n", **ptr);

    return 0;
}