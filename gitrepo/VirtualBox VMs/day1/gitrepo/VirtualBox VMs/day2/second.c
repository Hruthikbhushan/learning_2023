#include<stdio.h>
void swap(void* x, void* y, size_t size) {
    char* temp = (char*)malloc(size); 
    memcpy(temp, x, size);
    memcpy(x, y, size);
    memcpy(y, temp, size);
    free(temp); 
}
int main() {
    int i = 5;
    int j = 10;
    printf("Before swapping: i = %d, j = %d\n", x, y);
    swap(&x, &y, sizeof(int));
    printf("After swapping: i = %d, j = %d\n", x, y);
    double x = 2.5;
    double y = 4.7;
    printf("Before swapping: x = %.2f, y = %.2f\n", x, y);
    swap(&x, &y, sizeof(double));
    printf("After swapping: x = %.2f, y = %.2f\n", x, y);
    return 0;
}