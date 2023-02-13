#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, root1, root2, imaginary, discriminant;

    printf("Enter the coefficients of the quadratic equation (a, b, c): ");
    scanf("%f%f%f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and different.\n");
        printf("Root 1: %.2f\n", root1);
        printf("Root 2: %.2f\n", root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("The roots are real and equal.\n");
        printf("Root 1: Root 2: %.2f\n", root1);
    } else {
        imaginary = sqrt(-discriminant) / (2 * a);
        printf("The roots are complex and different.\n");
        printf("Root 1: %.2f + %.2fi\n", -b / (2 * a), imaginary);
        printf("Root 2: %.2f - %.2fi\n", -b / (2 * a), imaginary);
    }

    return 0;
}
