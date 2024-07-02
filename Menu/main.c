#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i=0,fact=1,a,p=1;
    float base,exp,result;
    while(i!=3)
    {
        printf("\n\n****THE MENU****\n");
        printf("1. Find factorial.\n 2. Find Exponenet.\n 3. Quit.\n");
        printf("\nChose one of the following: ");
        scanf("%d", &n);
        i=i+n;
        if(i==1)
        {   printf("Enter the number for which you want to find the factorial: ");
            scanf("%d", &a);
            while(p<=a)
            {
                fact=fact*p;
                ++p;
            }
                printf("\nThe factorial of %d is %d\n", a, fact);
                i=0;
                fact=1;

                p=1;
        }
        else if(i==2)
            {
              printf("Enter the value for the base: ");
              scanf("%f", &base);
              printf("Enter the value for the exponent: ");
              scanf("%f", &exp);
              result=pow(base,exp);
              printf("\nThe %f'th power of %f is %f\n", exp, base, result);
              i=0;
            }
       else if(n<1 || n>3)
              {
                printf("Please choose from the Menu.");
                i=0;
              }
    }
    if(i=3)
    printf("\n\n***THANK YOU***\n\n\n");

    return 0;
}
