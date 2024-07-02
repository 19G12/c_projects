#include <stdio.h>
#include <string.h>
 typedef struct{
   char company[20];
   char model[20];
   int year;
 }cars;
 int main()
 {
     int x;
     cars s;
     cars *p;
     p=&s;
     char i[20],j[20];
     printf("Enter the car manufacturing company: ");
     scanf("%[^\n]", i);
     strcpy(p->company, i);
     printf("Enter the car model: ");
     scanf("%s", j);
     strcpy(p->model, j);
     printf("\nEnter the Year of manufacture of the car: ");
     scanf("%d", &p->year);
     printf("\n\nYour car is %s %s which was manufactured on %d\n\n\n", p->company, p->model, p->year);
     x=strcmp(p->company, "Mercedez Benz");
     return 0;
 }
