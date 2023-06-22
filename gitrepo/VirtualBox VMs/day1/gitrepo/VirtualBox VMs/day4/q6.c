#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100
int main() {
    char input[MAX_SIZE];
    int numbers[MAX_SIZE];
    int count = 0;
    char *token;
    printf("Enter the string of comma-separated integers: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    token = strtok(input, ",");
    while (token != NULL) {
        numbers[count++] = atoi(token);
        token = strtok(NULL, ",");
    }
    printf("Converted array of integers:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}