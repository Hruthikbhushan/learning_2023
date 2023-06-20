#include <stdio.h>
struct Complex {
    double real;
    double imaginary;
};
struct Complex readComplex() {
    struct Complex c;
    printf("Enter the real part: ");
    scanf("%lf", &c.real);
    printf("Enter the imaginary part: ");
    scanf("%lf", &c.imaginary);
    return c;
}
void writeComplex(const struct Complex* c) {
    printf("Complex number: %.2f + %.2fi\n", c->real, c->imaginary);
}
struct Complex addComplex(const struct Complex* c1, const struct Complex* c2) {
    struct Complex result;
    result.real = c1->real + c2->real;
    result.imaginary = c1->imaginary + c2->imaginary;
    return result;
}
struct Complex multiplyComplex(const struct Complex* c1, const struct Complex* c2) {
    struct Complex result;
    result.real = c1->real * c2->real - c1->imaginary * c2->imaginary;
    result.imaginary = c1->real * c2->imaginary + c1->imaginary * c2->real;
    return result;
}
int main() {
    struct Complex complex1, complex2, sum, product;
    printf("Enter the first complex number:\n");
    complex1 = readComplex();
    printf("Enter the second complex number:\n");
    complex2 = readComplex();
    sum = addComplex(&complex1, &complex2);
    printf("Sum: ");
    writeComplex(&sum);
    product = multiplyComplex(&complex1, &complex2);
    printf("Product: ");
    writeComplex(&product);
    return 0;
}
