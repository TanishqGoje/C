#include <stdio.h>

int calcPercentage(int maths, int science, int sanskrit);

int main()
{

    int maths = 90;
    int science = 95;
    int sanskrit = 99;

    printf("Percentage = %d\n", calcPercentage(maths, science, sanskrit));
    return 0;
}

int calcPercentage(int maths, int science, int sanskrit)
{
    return (maths + science + sanskrit) / 3;
}