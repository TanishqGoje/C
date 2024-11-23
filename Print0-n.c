#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{

    int i = 0;
    int n;
    printf("Enter 'n' value : ");
    scanf("%d", &n);
    
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}