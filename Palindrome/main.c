#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    printf("Please enter the sentence or word to check for a palindrome ");
    scanf("%c", str);
    int i;
    i=strlen(str);
    printf("\n%d\n\n", i);
    return 0;
}
