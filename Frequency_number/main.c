#include <stdio.h>
#include <string.h>
int main()
{
    int i,j=0,k=48,l=0,t=0,count[10];
    char str[50],num[50];
    printf("Please enter the string : ");
    scanf("%[^\n]", str);

    for(i=0;i<10;++i)
    {
        count[i]=0;
    }

    for(i=0;str[i]!='\0';++i)
    {
        if(str[i]>=48 && str[i]<=57)
          {
            num[j]=str[i];
            ++j;
          }
          continue;
    }
    num[j]='\0';
    printf("\n\n%s\n\n", num);
    j=strlen(num);
    if(j<=10)
    {
        for(i=j;i<=10;++i)
        {
            num[i]='a';
        }
        num[i]='\0';
    }


    for(i=0;num[i]!='\0';++i)
    {
        for(j=0;num[j]!='\0';++j)
        {
          if(num[j]==k)
                ++l;
        }
        count[t]=l;
        ++t;
        ++k;
        l=0;
    }
    for(i=0;i<10;++i)
    {
        printf(" %d", count[i]);
    }
    return 0;
}
