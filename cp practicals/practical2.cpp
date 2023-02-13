#include <stdio.h>
#define PI 3.14159265
int main() {
    float radius, circumference, area, volume;
    printf("Enter the radius of the circle/sphere: ");
    scanf("%f", &radius);
    circumference = 2 * PI * radius;
    printf("Circumference of the circle: %.2f\n", circumference);
    area = PI * radius * radius;
    printf("Area of the circle: %.2f\n", area);
    volume = (4.0/3.0) * PI * radius * radius * radius;
    printf("Volume of the sphere: %.2f\n", volume);
    return 0;
}
