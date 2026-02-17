#include <stdio.h>

int main() 
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) 
    {
        printf("All three numbers are equal.");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Two numbers are equal.");
    }
    else if (a > b && a > c) 
    {
        printf("%d is the maximum number.", a);
    }
    else if (b > a && b > c) 
    {
        printf("%d is the maximum number.", b);
    }
    else 
    {
        printf("%d is the maximum number.", c);
    }

    return 0;
}
