#include<stdio.h>
int main()
{
    int num;
      printf("Enter A Number:");
      scanf("%d", &num);
      
    if (num % 2 == 0)
    {
        printf("The Number Is Even");
    
    }
    else
    {
        printf("The Number Is Odd");
    }
    return 0;
}
