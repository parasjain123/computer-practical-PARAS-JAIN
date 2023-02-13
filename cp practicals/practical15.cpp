#include <stdio.h>
#define MAX_SIZE 100

void merge(int arr1[], int arr2[], int m, int n, int arr3[]) {
    int i = 0, j = 0, k = 0;
    
    // Merge the arrays until we reach the end of one of them
    while (i < m && j < n) {
        // Compare the elements from both arrays and add the smaller one to arr3
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
    
    // Add the remaining elements from arr1 to arr3
    while (i < m)
        arr3[k++] = arr1[i++];
    
    // Add the remaining elements from arr2 to arr3
    while (j < n)
        arr3[k++] = arr2[j++];
}

int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE], arr3[MAX_SIZE];
    int m, n, i;
    
    // Input the size of the two arrays
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
    
    // Merge the arrays into arr3
    merge(arr1, arr2, m, n, arr3);
    
    // Print the merged array
    printf("The merged array is: ");
    for (i = 0; i < m + n; i++)
        printf("%d ", arr3[i]);
    
    return 0;
}
