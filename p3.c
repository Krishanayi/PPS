#include <stdio.h>

long long int iterativeFactorial(int n)
{
    long long int fact = 1;
    int i;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

long long int recursiveFactorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * recursiveFactorial(n - 1);
    }
}

int main()
{
    int n, choice;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Factorial is not defined for negative numbers.");
    }
    else
    {
        printf("\nChoose Method:\n");
        printf("1. Iterative Method\n");
        printf("2. Recursive Method\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("Factorial (Iterative) = %lld", iterativeFactorial(n));
        }
        else if(choice == 2)
        {
            printf("Factorial (Recursive) = %lld", recursiveFactorial(n));
        }
        else
        {
            printf("Invalid choice!");
        }
    }

    return 0;
}
