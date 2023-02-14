#include <stdio.h>
#include <math.h>
int main() {

    int a, b;
    printf("Input two integers : \n");
    scanf("%d %d",&a, &b);  
    printf("Output of AND Operator = %d \n", a & b);
    printf("Output of OR Operator = %d \n", a | b);
    printf("Output of XOR Operator = %d \n", a ^ b);
    printf("Output of NOT Operator = %d \n", ~a);
    printf("Output of NOT Operator = %d \n", ~b);
    return 0;
}
