#include <stdio.h>
#include <string.h>
typedef struct{
  char name[20];
  int roll;
  float phys, chem, maths;
}student;
void input(student *p)
{
    printf("Enter the name of the student :: ");
    scanf("%[^\n]", p->name);
    printf("Enter your Roll NO. ");
    scanf("%d", &p->roll);
    printf("\n\nEnter the Physics score of the Student: ");
    scanf("%f", &p->phys);
    printf("\n\nEnter the Mathematics score of the Student: ");
    scanf("%f", &p->maths);
    printf("\n\nEnter the Chemistry score of the Student: ");
    scanf("%f", &p->chem);
}
float get_average(student a)
{
    float avg;
    avg = (a.phys + a.chem + a.maths)/3;
    return avg;
}
char get_grade(student s)
{
    float avg;
    char c;
    avg=get_average(s);
    if(avg>=90)
        c = 'A';
    else if(avg>=80 && avg<90)
            c='B';
    else if(avg>=80 && avg<90)
            c='B';
    else if(avg>=70 && avg<80)
            c='C';
    else if(avg>=60 && avg<70)
            c='D';
    else
            c='E';
    return c;
}
int main()
{
    student s;
    char grade;
    input(&s);
    grade = get_grade(s);
    printf("**************************STUDENT REPORT********************");
    printf("\n\n");
    printf("ROLL NO.  %d", s.roll);
    printf("\n\n\n");
    printf("\t\tYour Physics score is %f\n\n", s.phys);
    printf("\t\tYour Mathematics score is %f\n\n", s.maths);
    printf("\t\tYour Chemistry score is %f\n\n", s.chem);
    printf("\n");
    printf("\t\t\t\nYour grade is %c", grade);
    printf("\n\n*****************************THANK YOU***********************");
    return 0;
}
