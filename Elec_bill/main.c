#include <stdio.h>
#include <stdio.h>
 int main()
{
    float unit,rate,amt;
    printf("\n\n*****Welcome to the ABC Power Supply Agency*****\n\n\n");
    printf("Please input the Units consumed: ");
    scanf("%f", &unit);
    if(unit<0)
        printf("The value of Units consumption cannot be negative!!\n\n");
    else if(unit>0 && unit<=100)
         {rate = 0.2;
         amt = rate*unit;
         printf("Total amount: %f for units consumed %f\n\n", amt, unit);
         printf("THANK YOU!!\n\n\n\n");
         }
    else if(unit>100 && unit<=250)
    {
        rate = 0.5;
        amt = rate*unit;
        printf("Total Amount: %f for units consumed %f\n\n", amt, unit);
        printf("THANK YOU!!\n\n\n\n");
    }
    else if(unit>250 && unit<=500)
    {
    rate = 0.75;
    amt = rate*unit;
    printf("Total amount: %f for units consumed %f\n\n", amt, unit);
    printf("THANK YOU!!\n\n\n\n");
    }
    else if(unit>500)
    {
        rate = 1;
        amt = rate*unit;
        printf("Total amount: %f for units consumed %f\n\n", amt, unit);
        printf("THANK YOU!!\n\n\n\n");
    }

    return 0;

}

