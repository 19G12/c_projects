#include <stdio.h>
float area_rect(float,float);
float area_circle(float);
float area_rect(float length,float breadth)
{
    float area;
    area=length*breadth;
    return area;
}
float area_circle(float radius)
{
    float area;
    area=3.14*radius*radius;
    return area;
}

int main()
{
    float length,breadth,area;
    printf("Enter the values for Length and Breadth: ");
    scanf("%f %f", &length, &breadth);
    area=area_rect(length,breadth);
    printf("\n\n%0.2f is the area for the rectangle\n\n", area);
    return 0;
}
