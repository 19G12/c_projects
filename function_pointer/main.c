#include<stdio.h>
#include<stdlib.h>

char to_upper_case(char ch);
char to_lower_case(char ch);
void change_cases(char str[], char (*p)(char));

int main()
{
    char str[] = "@Hello World@";
    printf("When the input is converted into the higher case: ");
    change_cases(str, to_upper_case);
    printf("%s", str);
    printf("\n");
    change_cases(str, to_lower_case);
    printf("When the input is converted into lower case: ");
    printf("\t  %s", str);
    printf("\n\n");
    return 0;
}
char to_upper_case(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        return ch - 32;
    }
    else
        return ch;
}
char to_lower_case(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        return ch + 32;
    }
    else
        return ch;
}
void change_cases(char str[], char (*p)(char))
{
    int i;
    for(i=0; str[i] != '\0'; ++i)
    {
        str[i] = p(str[i]);
    }
}
