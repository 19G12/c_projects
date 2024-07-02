#include <stdio.h>
#include <string.h>
typedef union{
  char name[10];
  float height;
  float weight;
}unary_type;
typedef struct{
  int roll;
  float gp;
  char c;
  unary_type d;
}student;
void print_req(student *s)
{
   printf("\nEnter your roll Number: ");
   scanf("%d", &s->roll);
   printf("\n\nYour chosen character is %c", s->c);
   printf("\n\n\n");
   if(s->c=='n')
    {
        printf("\n\nThe name of the candidate is: %s", s->d.name);
    }
    else if(s->c=='h')
    {
        printf("\nThe height of the candidate is %f", s->d.height);
    }
    else
    {
        printf("\nThe weight of the candidate is %f", s->d.weight);
    }
   printf("\nYour roll number is %d\n\n", s->roll);

}
int main()
{

    student s;
    printf("What do you want to input? Name, Height, or weight");
    printf("\n n for name;\n h for height;\n w for weight;\n");
    scanf(" %c", &s.c);
    if(s.c=='n')
    {
        printf("\n\nEnter the name: ");
        scanf(" %[^\n]", s.d.name);
    }
    else if(s.c=='h')
    {
        printf("\n\nEnter the Height in meters: ");
        scanf("%f", &s.d.height);
    }
    else
    {
        printf("\n\nEnter the Weight in Kg: ");
        scanf("%f", &s.d.weight);
    }
    print_req(&s);
    return 0;
}
