#include <stdio.h>
#include <math.h>

void namaste();
void bonjour();

int main()
{

    char ch;
    printf("Enter f for French and i for Indian");
    scanf("%s", &ch);

    if (ch == f)
    {
        namaste();
    }
    else
    {
        bonjour();
    }

    return 0;
}

void namaste()
{
    printf("Namaste\n");
}

void bonjour()
{
    printf("Bonjour\n");
}