#include<stdio.h>
int main()
{
    int area=0,circumference=0,radius;


    printf("enter radius");
    scanf("%d",&radius);
    area=3.14*radius*radius;
    circumference=2*3.14*radius;
    printf("area is  %d",area);
    printf("circumference is  %d",circumference);
    return 0;

}