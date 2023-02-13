#include <stdio.h>

unsigned int bitwise_and(unsigned int x, unsigned int y) {
    return x & y;
}

unsigned int bitwise_or(unsigned int x, unsigned int y) {
    return x | y;
}

unsigned int bitwise_xor(unsigned int x, unsigned int y) {
    return x ^ y;
}

unsigned int bitwise_not(unsigned int x) {
    return ~x;
}

int main() {
    unsigned int x = 5, y = 3;
    printf("AND: %u\n", bitwise_and(x, y));
    printf("OR: %u\n", bitwise_or(x, y));
    printf("XOR: %u\n", bitwise_xor(x, y));
    printf("NOT: %u\n", bitwise_not(x));
    return 0;
}
