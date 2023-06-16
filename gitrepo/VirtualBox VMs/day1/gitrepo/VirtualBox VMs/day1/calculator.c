#include<stdio.h>
int main(){
    float n1,n2;
    float result;
    char operator;
    printf("enter operands 1: ");
    scanf("%f" ,$n1);
    printf("enter operators : ");
    scanf("%f" ,$operator);
    printf("enter operands 2: ");
    scanf("%f" ,$n2);
    switch(operator){
        case '+':
             result = n1+n2;
             break;
        case '-':
             result = n1-n2;
             break;
        case '*':
             result = n1*n2;
             break;
        case '/':
             result = n1/n2;
             break;
        default:
        printf("invalid");
        return 1;
    }
    printf("result: %.2f\n",result);
    return 0;
}
