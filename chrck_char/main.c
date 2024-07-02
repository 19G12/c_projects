#include <stdio.h>
int check_char(char ch)
{
    if(ch>=48 && ch<=57)
        return 1;
    else
        return 0;
}
int main()
{
    char input,j;
    printf("Enter the character: ");
    scanf("%c", &input);
    j=check_char(input);
    if(j==1)
        printf("\n\nThe entered character is a number %d\n\n", input-48);
    else
        printf("\n\nThe entered character is not a number but %c\n\n", input);
    return 0;
}
