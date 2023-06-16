#include <stdio.h>
int main() {
    int array[] = {10, 20, 30, 40, 50};
    int size = sizeof(array) / sizeof(array[0]);
    int sum = 0;
    for (int i = 0; i < size; i += 2) {
        sum += array[i];
    }
    printf("Sum of alternate elements: %d\n", sum);
    return 0;
}