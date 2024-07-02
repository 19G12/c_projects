#include <stdio.h>
#include <stdlib.h>

int main()
{
  float rate = 0.06;
  int duration;
  float principle_amount;
  float total_interest;

  printf("Please input your duration: ");
  scanf("%d", &duration);
  printf("please input the principle amount: ");
  scanf("%f", &principle_amount);
  total_interest=rate*duration*principle_amount;
  printf("Your total payable interest is %f\n", total_interest);
  printf("for you deposited amount %f and rate %f", principle_amount, rate);
  return 0 ;
}
