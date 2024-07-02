#include <stdio.h>
int toggle_case0(char input[]);
int toggle_case1(char input[]);
int main()
{
    char string[100];
    int changed_case,i;
    printf("Enter the string: ");
    scanf("%[^\n]", string);
    printf("\n\nEnter 0 into console to change all the upper case to lower case\nEnter 1 into console to change all lower case characters to upper case");
    scanf("%d", &i);
    if(i==1)
        changed_case=toggle_case1(string);
    else
        changed_case=toggle_case0(string);

    printf("\nThe number of cases changed are %d\n\n\n", changed_case);
    return 0;
}
int toggle_case0(char input[])
{
    int i, j=0;
    for(i=0;input[i]!='\0';++i)
    {
        if(input[i]>='A' && input[i]<='Z'){
            input[i]=input[i]+32;
            ++j;
        }
        else
            continue;
    }
    printf("\n\nThe new string is %s\n\n", input);
    return j;
}
int toggle_case1(char input[])
{

    int i, j=0;
    for(i=0;input[i]!='\0';++i)
    {
        if(input[i]>='a' && input[i]<='z'){
            input[i]=input[i]-32;
            ++j;
        }
        else
            continue;
    }
    printf("\n\nThe new string is %s\n\n", input);
    return j;
}
