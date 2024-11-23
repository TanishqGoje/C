#include<stdio.h>
#include<string.h>
int main()
{
    int x=0,c;
    char email[50], cEmail[50];
    do
    {
        printf("Enter your email address : ");
        scanf("%s", &email);
        printf("Confrim your email address : ");
        scanf("%s", &cEmail);
        c=strcmp(email,cEmail);
        if (c==0)
        {
            printf("Email Registered\n");
            break;
        }
        else
        { printf("Email does not match\nEnter email again");}
            
            x++;
            if(x==2)
            {printf("your attempts are over");
            break;}
    } while (x<=2);
    return 0;
}