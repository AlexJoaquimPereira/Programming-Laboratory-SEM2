#include<stdio.h>
void main()
{
    int b, h;
    float area;
    printf("Enter base and height of a triangle: \n");
    scanf("%d %d",&b,&h);
    area=b*h*0.5;
    printf("Area of triangle is: %f\n",area);
}

