#include <stdio.h>
#define MAX_SIZE 100
void merge(int arr1[], int arr2[], int m, int n, int arr3[]) {
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
    while (i < m)
        arr3[k++] = arr1[i++];
    while (j < n)
        arr3[k++] = arr2[j++];
}
int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE], arr3[MAX_SIZE];
    int m, n, i;
    printf("Enter the number of elements in array 1: ");
    scanf("%d", &m);
    printf("Enter the elements of array 1 in ascending order: ");
    for (i = 0; i < m; i++)
        scanf("%d", &arr1[i]);
    printf("Enter the number of elements in array 2: ");
    scanf("%d", &n);
    printf("Enter the elements of array 2 in ascending order: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr2[i]);
    merge(arr1, arr2, m, n, arr3);
    printf("The merged array is: ");
    for (i = 0; i < m + n; i++)
        printf("%d ", arr3[i]);
    
    return 0;
}
