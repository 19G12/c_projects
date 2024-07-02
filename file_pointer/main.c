#include<stdio.h>
#include<stdlib.h>

char upper_case(char ch);
char lower_case(char ch);
void change_case(char str[], char (*p)(char ch));

int main()
{
    char str[] = "@Hello World#";
    void change_case(str, upper_case(char ch));
    printf("%[^\n]", str);
    printf("\n");
    void change_case(str, lower_case(char ch));
    printf("%[^\n]", str);
    printf("\n");
    return 0;
}
char upper_case(char ch)
{
    if(ch>= 'a' && ch<= 'z')
    {
        ch -= 32;
        return ch;
    }
    else
        return ch;
}
char lower_case(char ch)
{
    if(ch>= 'A' && ch<= 'Z')
    {
        ch += 32;
        return ch;
    }
    else
        return ch;
}
void change_case(char str[], char (*p)(char ch))
{
    int i;
    for( i=0; str[i] != '\0'; ++i)
    {
        str[i]= (*p)(char str[i]);
    }
}
