#include <stdio.h>

void print_data(int number);
void print_invert(int num);

int main()
{
   int n;
   printf("Enter the number whose binary is to be printed: ");
   scanf("%d", &n);
   print_data(n);
   printf("\n\n");
   printf("The inverted binary format for the entered number:\n");
   print_invert(n);
   printf("\n\n\n");
   return 0;
}

void print_data(int number)
{
    int i;
    unsigned k = 1<<31;
    for(i=0;i<sizeof(int)*8;++i)
    {
        if((number & (k>>i)) == (k>>i))
        {
            printf("1");
        }
        else
            printf("0");
        if((i+1)%8 == 0)
            printf(" ");
    }
}
void print_invert(int num)
{
    int i;
    unsigned k = 1<<31;
    for(i=0;i<sizeof(int)*8;++i)
    {
        if((num & (k>>i)) == (k>>i))
        {
            printf("0");
        }
        else
            printf("1");
        if((i+1)%8 == 0)
            printf(" ");
    }
}
