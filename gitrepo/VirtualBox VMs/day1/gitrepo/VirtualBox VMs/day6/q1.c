#include <stdio.h>
int main() {
    FILE *source, *destination;
    char ch;
    source = fopen("source_file.txt", "r");
    destination = fopen("destination_file.txt", "w");
    if (source == NULL || destination == NULL) {
        printf("Error in opening files.\n");
        return 1;
    }
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
    printf("File copied successfully.\n");
    fclose(source);
    fclose(destination);
    return 0;
}
