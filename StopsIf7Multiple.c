#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{

    int n; // Local variables;

    do
    {
        printf("Enter a number : "); // Statements;
        scanf("%d", &n);

        if (n % 7 == 0)
        {
            printf("Thank You");
            break;
        }

    } while (1);

    return 0;
}