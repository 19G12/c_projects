#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a,t,t2,u,s1,s2,v2,avg;
    printf("Please feed the value for the acceleration of the body( assumed constant throughout): ");
    scanf("%d", &a);
    printf("Please specify the time interval of the motion: ");
    scanf("%d", &t2);
    printf("What must be the initial velocity of the particle: ");
    scanf("%d", &u);
    if(t2>0)
    {
    if(a>=0)
    {
        s1=u*t2+(a*t2*t2)/2;
        avg=s1/t2;
        printf("The average velocity of the particle throughout the motion comes out to be:%d\n\n", avg);
    }

   else if(a<0)
    {
    t=u/(-a);


    if(t>0 && t<t2)
    {
        s1=u*t+(a*t*t)/2;
        s2=((-a)*(t2-t)*(t2-t))/2;
        avg=(s1-s2)/(t2);
        printf("The average velocity in the course of the motion of the particle is :%d\n\n", avg);
    }
    else if(t>=t2)
    {
        s1=u*t2+(a*t2*t2)/2;
        avg=s1/t2;
        printf("The average velocity of the particle is :%d\n\n", avg);
    }
    }
    }
    else
        printf("\n\nThe value of the time interval cannot be negative!!\n\n");
     if(t2>0)
        {
    printf("The positive value of average velocity represents the positive X-Axis and the negative value of average velocity shows negative X-Axis\n\n");
    printf("PLEASE NOTE THAT THE VALUES FOR AVERAGE VELOCITIES ARE ROUNDED OFF TO THE NEAREST INTEGER\n\n");
    printf("THANK YOU\n\n");
     }
    return 0;
}
