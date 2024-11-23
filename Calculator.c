#include<stdio.h>

int main()
{
    float op1, op2;
    char operator;

    printf("Enter operands : ");
    scanf("%f %f", &op1, &op2);
    printf("Enter operator (+, -, *, /) : ");
    scanf("%s", &operator);

    switch (operator)
    {
    case '+' :
        printf("Result : %.2f", op1+op2);
        break;
    case '-' :
        printf("Result : %.2f", op1-op2);
        break;
    case '*' :
        printf("Result : %.2f", op1*op2);
        break;
    case '/' :
        if (op2 == 0)
        {
            printf("Not Defined");
        }else
        {
        printf("Result : %.2f", op1/op2);
        }
        break;     
    default:
        break;
    }
}