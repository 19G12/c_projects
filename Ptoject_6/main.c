#include <stdio.h>
#include <stdlib.h>

void main()
{

    float W,H,bmi;
    printf("Input your weight in Kilograms : ");
    scanf("%f", &W);
    printf("Input your height in Meters :  ");
    scanf("%f", &H);
    bmi=(float)W/(H*H);
    if(bmi>0 && bmi<18.5)
    {printf("Your BMI is %f\n", bmi);
      printf("You belong to Underweight category.");
    }
    else if(bmi>=18.5 && bmi<24.9)
    {
        printf("Your BMI is %f\n", bmi);
        printf("You belong to Normal category\n");
    }
    else if(bmi>=24.9 && bmi<29.9)
    {
        printf("Your BMI is %f\n", bmi);
        printf("You belong to Overweight category\n");
    }
    else if(bmi>=29.9)
    {
        printf("Your BMI is %f\n", bmi);
        printf("You belong to Obese category\n ");
    }
    if(H<0 || W<0)
        printf("Height or weight cannot be negative");

    return 0;

}
