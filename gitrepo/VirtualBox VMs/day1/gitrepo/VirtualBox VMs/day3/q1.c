#include <stdio.h>
void print_numbers(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
    for (i = n - 1; i >= 1; i--) {
        printf("%d", i);
    }
}
void print_spaces(int n) {
    int i;
    for (i = 0; i < n - 2; i++) {
        printf(" ");
    }
}
void print_reverse_numbers(int n) {
    int i;
    for (i = n; i >= 1; i--) {
        printf("%d", i);
    }
    for (i = 2; i <= n; i++) {
        printf("%d", i);
    }
}
void print_pattern(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        print_numbers(i);
        if (i != n) {
            print_spaces(i);
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        print_numbers(i);
        if (i != 1) {
            print_spaces(i);
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    print_pattern(n);
    return 0;
}
