#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    float avg;

    printf("Please enter the first integer : ");
    scanf("%d", &a);
    printf("Please enter the second integer : ");
    scanf("%d", &b);
    printf("Please enter the third integer : ");
    scanf("%d", &c);
    avg = (float)(a+b+c)/3;
    printf("The average of the input numbers = %f\n", avg);

    return 0;

}
