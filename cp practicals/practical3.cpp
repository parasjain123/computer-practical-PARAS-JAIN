#include <stdio.h>
int main() {
    int num, result;
    printf("Enter an integer: ");
    scanf("%d", &num);
    result = num >> 1;
    printf("%d right shifted by 1 is equal to %d\n", num, result);
    result = num << 1;
    printf("%d left shifted by 1 is equal to %d\n", num, result);

    return 0;
}
