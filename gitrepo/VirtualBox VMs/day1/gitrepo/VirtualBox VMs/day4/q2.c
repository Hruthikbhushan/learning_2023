#include <stdio.h>
#define MAXIMA 100
int main() {
    int array[MAXIMA];
    int size, i;
    int min, max;
    printf("Enter the size of the array (up to %d): ", MAXIMA);
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    min = max = array[0];
    for (i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    return 0;
}