#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int n);

void printPrimes(int N);

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    printf("Prime numbers from 1 to %d are: ", N);
    printPrimes(N);
    return 0;
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void printPrimes(int N)
{
    for (int i = 1; i <= N; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
}