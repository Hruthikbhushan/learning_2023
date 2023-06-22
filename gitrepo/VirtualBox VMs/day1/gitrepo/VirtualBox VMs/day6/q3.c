#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ENTRIES 100
typedef struct {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[10];
} LogEntry;
void readDataFromFile(LogEntry entries[], int *numEntries) {
    FILE *file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Error in opening the file.\n");
        exit(1);
    }
    char line[100];
    fgets(line, sizeof(line), file); 
    *numEntries = 0;
    while (fgets(line, sizeof(line), file)) {
        char *token;
        token = strtok(line, ",");
        entries[*numEntries].entryNo = atoi(token);
        token = strtok(NULL, ",");
        strcpy(entries[*numEntries].sensorNo, token);
        token = strtok(NULL, ",");
        entries[*numEntries].temperature = atof(token);
        token = strtok(NULL, ",");
        entries[*numEntries].humidity = atoi(token);
        token = strtok(NULL, ",");
        entries[*numEntries].light = atoi(token);
        token = strtok(NULL, ",");
        strcpy(entries[*numEntries].timestamp, token);
        (*numEntries)++;
    }
    fclose(file);
}
void displayData(LogEntry entries[], int numEntries) {
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTimestamp\n");
    for (int i = 0; i < numEntries; i++) {
        printf("%d\t%s\t\t%.2f\t\t%d\t\t%d\t%s\n", entries[i].entryNo, entries[i].sensorNo, entries[i].temperature,
               entries[i].humidity, entries[i].light, entries[i].timestamp);
    }
}
int main() {
    LogEntry entries[MAX_ENTRIES];
    int numEntries = 0;
    readDataFromFile(entries, &numEntries);
    displayData(entries, numEntries);
    return 0;
}
