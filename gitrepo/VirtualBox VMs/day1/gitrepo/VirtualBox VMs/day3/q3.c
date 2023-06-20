#include <stdio.h>
int find_largest_number(int num) {
    int max_num = 0;
    char str_num[5];
    sprintf(str_num, "%d", num);
    int i, j;
    for (i = 0; i < 4; i++) {
        char new_num[4];
        for (j = 0; j < i; j++) {
            new_num[j] = str_num[j];
        }
        for (j = i + 1; j < 4; j++) {
            new_num[j - 1] = str_num[j];
        }
        new_num[3] = '\0';
        int num = atoi(new_num);
        if (num > max_num) {
            max_num = num;
        }
    }
    return max_num;
}
int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    int largest_num = find_largest_number(num);
    printf("The largest number by deleting a single digit is: %d\n", largest_num);
    return 0;
}
