#include <stdio.h>

int main()
{
    int n;
    int t1 = 0;
    int t2 = 1;
    int nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d, ", t1, t2);

    for (int i = 3; i <= n; ++i)
    {
        nextTerm = t1 + t2;
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}