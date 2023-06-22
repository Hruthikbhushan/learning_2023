#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
void toggleCase(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
}
int main() {
    char str[MAX_SIZE];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Original string: %s\n", str);
    toggleCase(str);
    printf("Toggled case string: %s\n", str);
    return 0;
}