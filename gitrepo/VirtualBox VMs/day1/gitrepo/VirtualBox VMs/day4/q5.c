#include <stdio.h>
#define SIZE 10
int main() {
    int array[SIZE] = {64, 84, 20, 36, 12, 90, 72, 10, 45, 56};
    int i, evenSum = 0, oddSum = 0, difference;
    for (i = 0; i < SIZE; i++) {
        if (i % 2 == 0) {
            evenSum += array[i];
        } else {
            oddSum += array[i];
        }
    }
    difference = evenSum - oddSum;
    printf("Sum of even-indexed elements: %d\n", evenSum);
    printf("Sum of odd-indexed elements: %d\n", oddSum);
    printf("Difference: %d\n", difference);
    return 0;
}