#include <stdio.h>
int main() {
    int hours, minutes, seconds;
    int totalSeconds;
    printf("Enter the time in hours, minutes, and seconds:\n");
    printf("Hours: ");
    scanf("%d", &hours);
    printf("Minutes: ");
    scanf("%d", &minutes);
    printf("Seconds: ");
    scanf("%d", &seconds);
    totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
    printf("Total seconds: %d\n", totalSeconds);
    return 0;
}