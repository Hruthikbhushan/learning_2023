#include <stdio.h>
void copyFileWithCase(char *sourceFilename, char *destinationFilename, char option) {
    FILE *source, *destination;
    char ch;
    source = fopen(sourceFilename, "r");
    destination = fopen(destinationFilename, "w");
    if (source == NULL || destination == NULL) {
        printf("Error in opening files.\n");
        return;
    }
    while ((ch = fgetc(source)) != EOF) {
        if (option == 'u')
            ch = toupper(ch);
        else if (option == 'l')
            ch = tolower(ch);
        else if (option == 's' && islower(ch))
            ch = toupper(ch);
        fputc(ch, destination);
    }
    printf("File copied successfully with case handling.\n");
    fclose(source);
    fclose(destination);
}
int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments.\n");
        return 1;
    }
    char *option = argv[1];
    char *sourceFilename = argv[2];
    char *destinationFilename = argv[3];
    if (option[0] == '-' && option[1] != '\0' && sourceFilename != NULL && destinationFilename != NULL)
        copyFileWithCase(sourceFilename, destinationFilename, option[1]);
    else {
        printf("Invalid option or filenames.\n");
        return 1;
    }
    return 0;
}
