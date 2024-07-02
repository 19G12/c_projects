#include <stdio.h>
#include <math.h>
#include <string.h>

int armstr(char k[20])
{
    int i,j=0,sum=0,number;
    for(i=0;i<strlen(k);++i)
        ++j;

    for(i=0;i<j;++i)
    {
        number = number + k[i]*pow(10,i);
    }
    for(i=0;i<j;++i)
        sum=sum+pow(k[i],4);
    if(sum==number)
        return 1;
    else
        return 0;

}
int main()
{
    char value[20];
    int j;
    printf("Please enter the number.");
    scanf("%[^\n]", value);
    j=armstr(value);
    if(j==1)
        printf("\n\nYes!! It is an armstrong number.\n\n");
    else
        printf("\n\nNo it is not an armstrong number.\n\n");
    return 0;
}



