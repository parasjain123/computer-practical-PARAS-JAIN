#include <stdio.h>

void inputMatrix(int matrix[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int A[3][3], int B[3][3], int C[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void multiplyMatrices(int A[3][3], int B[3][3], int C[3][3]) {
    int i, j, k;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            C[i][j] = 0;
            for (k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void transposeMatrix(int A[3][3], int B[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            B[i][j] = A[j][i];
        }
    }
}

int main() {
    int A[3][3], B[3][3], C[3][3];
    
    printf("Enter matrix A:\n");
    inputMatrix(A);
    printf("\nEnter matrix B:\n");
    inputMatrix(B);
    
    printf("\nMatrix A:\n");
    printMatrix(A);
    printf("\nMatrix B:\n");
    printMatrix(B);
    
    printf("\nSum of matrices:\n");
    addMatrices(A, B, C);
    printMatrix(C);
    
    printf("\nMultiplication of matrices:\n");
    multiplyMatrices(A, B, C);
    printMatrix(C);
    
    printf("\nTranspose of matrix A:\n");
    transposeMatrix(A, C);
    printMatrix(C);
    
    printf("\nTranspose of matrix B:\n");
    transposeMatrix(B, C);
    printMatrix(C);
    
     return 0 ;}