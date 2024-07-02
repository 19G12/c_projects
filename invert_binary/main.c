#include<stdio.h>

void invert_binary(int num);
void give_binary(int num);
int main()
{
  int num;
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("\n\nThe binary form is:\t");
  give_binary(num);
  printf("\nThe compliment is:\t");
  invert_binary(num);
  printf("\nBit-wise compliment:\t");
  num = ~num;
  give_binary(num);
  printf("\n\n\n");
  return 0;
}

void invert_binary(int num)
{
    unsigned k = (1<<31);
    int i;
    for(i=0;i<sizeof(int)*8;++i)
    {
        if((num & (k>>i)) == (k>>i))
            printf("0");
        else
            printf("1");

        if((i+1)%8 == 0)
            printf(" ");
    }
}

void give_binary(int num)
{
    unsigned k = (1<<31);
    int i;
    for(i=0;i<sizeof(int)*8;++i)
    {
        if((num & (k>>i)) == (k>>i))
            printf("1");
        else
            printf("0");

        if((i+1)%8 == 0)
            printf(" ");
    }
}
