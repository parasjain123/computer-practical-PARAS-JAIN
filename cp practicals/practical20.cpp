#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n, i;
    int a[MAX_SIZE];
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("The elements of the array in reverse order are:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d\n", a[i]);
    }
    
    return 0;
}


