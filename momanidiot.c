#include <stdio.h>
int main()
{
    int age = 22;
    int *ptr = &age;
    int agevalue = *ptr;

    printf("%p", agevalue);
}