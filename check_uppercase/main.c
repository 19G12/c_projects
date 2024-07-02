#include <stdio.h>

int check_case(char check)
{
    if(check>=65 && check<=90)
        return 0;
    else if(check>=97 && check<=122)
        return 1;
    else
        return 2;
}
int main()
{
    char i;
    int j;
    printf("Enter a character: ");
    scanf("%c", &i);
    j=check_case(i);
    if(j==0)
        printf("\n\nThe entered case is an upper case.\n");
    else if(j==1)
        printf("\n\nThe entered case is a lower case.\n");
    else
        printf("\n\n Invalid input.\n");
    return 0;
}
