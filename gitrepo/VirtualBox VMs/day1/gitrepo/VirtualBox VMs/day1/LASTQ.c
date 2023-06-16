#include <stdio.h>
int bit_operations(int num, int oper_type) {
    int Result = num;  
    switch (oper_type) {
        case 1:
            Result |= (1 << 0);   
            break;
        case 2:
            Result &= ~(1 << 31);
            break;
        case 3:
            Result ^= (1 << 15);
            break;
        default:
            printf("Invalid operation type\n");
            break;
    }
    return result;
}
int main() {
    int num, oper_type;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("Enter the operation type : ");
    scanf("%d", &oper_type);
    int Result = bit_operations(num, oper_type);
    printf("Result: %d\n", Result);
    return 0;
}
       
