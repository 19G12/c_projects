#include <stdio.h>
#include <stdlib.h>

void main()
{
    int age;
    printf("Please enter the age: ");
    scanf("%d", &age);
    if (age>0 && age<=13)
        printf("Hey there! you are still a child");
    else if(age>=13 && age<19)
        printf("How you doi'n teenager?");
    else if(age>=19 && age<25)
        printf("Being adult, your journey begins in the life best of luck");
    else if(age>=25)
        printf("Its time buddy, when u get to understand your responsibilities and stand up to it");
    else
        printf("The input age is invalid");
    return 0;
}
