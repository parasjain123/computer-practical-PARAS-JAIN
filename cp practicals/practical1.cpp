#include <stdio.h>

int main() {
    int num1, num2, num3;
    float average;

    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    average = (float)(num1 + num2 + num3) / 3;
    printf("The average of the 3 numbers is: %.2f\n", average);

    return 0;
}
