#include <stdio.h>

int main()
{
    float price[3];
    printf("Enter 3 prices : ");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("Total Price 1 : %d\n", price[0] + (0.18 * price[0]));
    printf("Total Price 2 : %d\n", price[1] + (0.18 * price[1]));
    printf("Total Price 3 : %d\n", price[2] + (0.18 * price[2]));

    return 0;
}