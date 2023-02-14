#include <stdio.h> 
int main()
{
   float radius,area,perimeter,volume; 
    printf("Enter radius of circle: ");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    perimeter=2*3.14*radius;
    volume=4*3.14*radius*radius*radius/3;
    printf("Perimeter of circle: %f\nArea of circle: %f \nVolume of sphere: %f \n",perimeter,area,volume);
    return 0;
}
