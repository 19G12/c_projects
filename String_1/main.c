#include <stdio.h>
#include <string.h>
int main()
{
    char input[100] = "My name is Khan! and I am not a terrorist.";
    char word[50][50],small[50],large[50];
    int i,j,k,length;
    for(k=0;input[k]!='\0';++k)
    {
        if(input[k]!=' ' && input[k]!='\0')
        {
            word[i][j]=input[k];
            ++j;
        }
        else
        {
            word[i][j]='\0';
            j=0;
            ++i;
        }
    }
    word[i][j+1]='\0';
    length=i+1;
    strcpy(small,word[0]);
    strcpy(large,word[0]);
    for(k=0;k<length;++i)
    {
        if(strlen(small)>strlen(word[k]))
        {
            strcpy(small,word[k]);
        }
        if(strlen(large)>strlen(word[k]))
        {
            strcpy(large,word[k]);
        }
    }
    printf("\nThe smallest word is %s\n", small);
    printf("Whose length is %d\n\n", strlen(small));
    return 0;
}
