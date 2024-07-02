#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100],word[50][50];
    int i=0,j=0,k,m,l,o,p;
    printf("Enter the sentence: ");
    scanf("%[^\n]", str1);
    //printf("\n%s", str1);
    for(k=0;str1[k]!='\0';++k)
    {
        if(str1[k]!=' ')
        {
            word[i][j]=str1[k];
            ++j;
        }
        else if(str1[k]==' ')
        {
            word[i][j]='\0';
            ++i;
            j=0;
        }

    }
    word[i][j]='\0';
    k=i;
  /*  for(j=0;j<=i;++j)
    {
        printf("\n%s", word[j]);
    }
 */
    o=strlen(word[0]);
    p=strlen(word[0]);

    for(j=0;j<=k;++j)
    {
        if(p<strlen(word[j]))
          {
            p=strlen(word[j]);
            l=j;
          }
        if(o>strlen(word[j]))
           {
            o=strlen(word[j]);
            m=j;
           }
    }

    printf("\nLongest word is %s", word[l]);
    printf("\nShortest word is %s \n", word[m]);

    return 0;
}
