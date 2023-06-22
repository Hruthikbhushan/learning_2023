#include <stdio.h>
#define SIZE 10
int main() {
    int array[SIZE] = {64, 84, 20, 36, 12, 90, 72, 10, 45, 56};
    int i, temp;
    printf("Original array:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    for (i = 0; i < SIZE / 2; i++) {
        temp = array[i];
        array[i] = array[SIZE - 1 - i];
        array[SIZE - 1 - i] = temp;
    }
    printf("Reversed array:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}