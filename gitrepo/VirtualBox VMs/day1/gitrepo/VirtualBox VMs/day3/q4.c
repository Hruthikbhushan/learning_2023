#include <stdio.h>
void find_smallest_and_largest_digits(int num, int *smallest, int *largest) {
    int digit;
    *smallest = 9;
    *largest = 0;
    while (num > 0) {
        digit = num % 10;
        if (digit < *smallest) {
            *smallest = digit;
        }
        if (digit > *largest) {
            *largest = digit;
        }
        num /= 10;
    }
}
int main() {
    int n, i, num, smallest, largest;
    printf("Enter the number of values: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Not Valid\n");
        return 0;
    }
    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        find_smallest_and_largest_digits(num, &smallest, &largest);
        printf("Smallest digit: %d\n", smallest);
        printf("Largest digit: %d\n", largest);
        printf("\n");
    }
    return 0;
}
