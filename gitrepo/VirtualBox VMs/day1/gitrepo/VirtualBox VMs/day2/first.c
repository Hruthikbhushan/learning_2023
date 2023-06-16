#include <stdio.h>
void exponent(double x) {
    unsigned long long* ptr = (unsigned long long*)&x; 
    unsigned long long exponent = (*ptr & 0x7FF0000000000000) >> 52;
    printf("Hexadecimal exponent: 0x%llX\n", exponent);
    printf("Binary exponent");
    for (int i = 11; i >= 0; i--) {
        unsigned long long bit = (exponent >> i) & 1;
        printf("%llu", bit);
    }
    printf("\n");
}
int main() {
    double x = 0.7;
    exponent(x);
    return 0;
}