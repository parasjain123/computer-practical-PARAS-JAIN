#include <stddef.h>
#include <stdio.h>

int compare_arrays(int *a, int *b, size_t len) {
  for (size_t i = 0; i < len; i++) {
    if (a[i] != b[i]) {
      return 0;
    }
  }
  return 1;
}

int main(void) {
  size_t len;
  printf("Enter the length of the arrays: ");
  scanf("%zu", &len);

  int a[len];
  int b[len];
  
  printf("Enter the elements of first array: ");
  for (size_t i = 0; i < len; i++) {
    scanf("%d", &a[i]);
  }

  printf("Enter the elements of second array: ");
  for (size_t i = 0; i < len; i++) {
    scanf("%d", &b[i]);
  }

  int result = compare_arrays(a, b, len);
  if (result) {
    printf("1\n");
  } else {
    printf("0\n");
  }

  return 0;
}
