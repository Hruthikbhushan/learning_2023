#include <stdio.h>
int countBits(unsigned int value) {
    int count = 0;
    while (value != 0) {
        count += value & 1; 
        value >>= 1; 
    }
    return count;
}
int main() {
    unsigned int array[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(array) / sizeof(array[0]);
    int totalBits = 0;
    for (int i = 0; i < size; i++) {
        totalBits += countBits(array[i]);
    }
    printf("Total number of set bits: %d\n", totalBits);
    return 0;
}