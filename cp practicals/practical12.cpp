#include <stdio.h>

int main() {
    int m, i = 1, first = 0, second = 1, next;

    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &m);

    printf("First %d Fibonacci numbers: \n", m);
    do {
        if (i == 1) {
            printf("%d\n", first);
        } else if (i == 2) {
            printf("%d\n", second);
        } else {
            next = first + second;
            first = second;
            second = next;
            printf("%d\n", next);
        }
        i++;
    } while (i <= m);

    return 0;
}
