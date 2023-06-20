#include <stdio.h>
void print_bits(int num) {
    int i;
    for (i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}
int main() {
    int num;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);
    print_bits(num);
    return 0;
}
