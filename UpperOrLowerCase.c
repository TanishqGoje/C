#include <stdio.h>
#include <math.h>

// Program to find if a char is upper case or not

int main()
{

    char ch;
    printf("Enter a character : ");
    scanf("%s", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("This character is in upper case");
    }
    if (ch >= 'a' && ch <= 'z')
    {
        printf("This character is in lower case");
    }

    return 0;
}

/*
    In C every character has an ascii value
    A-Z : 65-90
    a-z : 97-122
*/