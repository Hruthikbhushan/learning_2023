#include <stdio.h>
#define MAXIMA 100
int main() {
    int array[MAXIMA];
    int size, i;
    int sum = 0;
    float average;
    printf("Enter the size of the array (up to %d): ", MAXIMA);
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
        sum += array[i];
    }
    average = (float)sum / size;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    return 0;
}