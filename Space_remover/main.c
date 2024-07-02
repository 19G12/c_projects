#include <stdio.h>
#include <string.h>
int main()
{
    char input[30],rect[30],pal[30],check[30];
    int i,j=0,k;
    printf("Enter a statement: ");
    scanf("%[^\n]", input);



    for(i=0;input[i]!='\0';++i)
    {
        if(input[i]!=' ' && input[i]!='\0')
        {
            rect[j]=input[i];
            ++j;
        }
        if(input[i]==' ')
            continue;
    }
    rect[j]='\0';




    for(k=0;rect[k]!='\0';++k)
    {
        if(rect[k]>=65 && rect[k]<=90)
            rect[k]=rect[k]+32;
    }
    printf("\n\nThe first statement is: %s", rect);

    for(i=0;rect[i]!='\0';++i)
    {
        if((rect[i]<97 || rect[i]>122) && (rect[i]!='\0'))
        {
            rect[i]=' ';

        }
        else
            continue;

    }
    rect[i]='\0';
    printf("\n\nThe statement without spaces and without special: %s", rect);


    j=0;
    for(i=0;rect[i]!='\0';++i)
    {
        if(rect[i]!=' ' && rect[i]!='\0')
        {
            pal[j]=rect[i];
            ++j;
        }
        if(rect[i]==' ')
            continue;
    }
    pal[j]='\0';

    printf("\n\nThe final statement is %s\n\n", pal);
    i=strlen(pal);
    j=0;
    for(k=i-1;k>=0;--k)
    {
        check[j]=pal[k];
        ++j;
    }
    check[j]='\0';

    printf("\n\nThe opposite of input is: %s", check);

    k=strcmp(check,pal);
    if(k==0)
        printf("\n\nYes! It is a palindrome.\n\n");
    else
        printf("\n\nNo it is not a palindrome.\n\n");
    return 0;
}

