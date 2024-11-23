#include <stdio.h>
int main()
{
    int PIN = 1234;
    int enteredPIN, attempts = 3;
    printf("Enter your PIN(You have %d attempt(s) : ", attempts);
    do
    {
        scanf("%d", &enteredPIN);
        if (enteredPIN != PIN)
        {
            printf("PIN is incorrect\enteredPIN");
            if (attempts >= 2)
            {
                printf("Enter again(%d attempt(s) left) : ", attempts - 1);
            }
            attempts--;
        }
    } while (attempts != 0 && enteredPIN != PIN);
    if (PIN == enteredPIN)
    {
        printf("PIN is correct\nAccess is granted");
    }
    else
    {
        printf("Your account is blocked\n");
    }
    return 0;
}