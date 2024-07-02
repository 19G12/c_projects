
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int age;
    int i;
    printf("Please enter your age : ");
    scanf("%d", &age);
    i = age<=18;
   printf("The value of i is :%d \n", i);
   printf("If the value of i is 1 then you are an adult\n");
   printf("Otherwise you are not an adult\n");

    return 0;

}
