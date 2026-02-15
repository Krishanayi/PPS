#include<stdio.h>
int main()
{
    float Pen=90;
    float Book=200;
    float Chocolate=150;
    float Compass=300;
    float Highlighter=100;
    float a, b, c, d, e;
       printf("Enter How Many Pen Do You Want\n");
       scanf("%f", &a);
       printf("Enter How Many Book Do You Want\n");
       scanf("%f", &b);
       printf("Enter How Many Chocolate Do You Want\n");
       scanf("%f", &c);
       printf("Enter How Many Pen Compass You Want\n");
       scanf("%f", &d);
       printf("Enter How Many Highlighter Do You Want\n");
       scanf("%f", &e);
    float z;
    z = (Pen*a) + (Book*b) + (Chocolate*c) + (Compass*d) + (Highlighter*e);
       printf("Total is %f\n", z);
       if(z>=500)
       {
           printf("The Discounted Bill Is %f\n", z - ((z*5) / 100) );
       }
       else if (z>=1000);
       {
           printf("The Discounted Bill Is %f\n", z - ((z*10) / 100) );
       }
       return 0;
}
