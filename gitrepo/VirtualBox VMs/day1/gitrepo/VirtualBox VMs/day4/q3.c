#include <stdio.h>
struct Time {
    int hours;
    int minutes;
    int seconds;
};
struct Time differenceBetweenTimePeriods(struct Time start, struct Time end) {
    struct Time diff;
    if (end.seconds < start.seconds) {
        --end.minutes;
        end.seconds += 60;
    }
    diff.seconds = end.seconds - start.seconds;
    if (end.minutes < start.minutes) {
        --end.hours;
        end.minutes += 60;
    }
    diff.minutes = end.minutes - start.minutes;
    diff.hours = end.hours - start.hours;
    return diff;
}
int main() {
    struct Time startTime, endTime, difference;
    printf("Enter start time (hours minutes seconds): ");
    scanf("%d%d%d", &startTime.hours, &startTime.minutes, &startTime.seconds);
    printf("Enter end time (hours minutes seconds): ");
    scanf("%d%d%d", &endTime.hours, &endTime.minutes, &endTime.seconds);
    difference = differenceBetweenTimePeriods(startTime, endTime);
    printf("Time difference: %d hours, %d minutes, %d seconds\n", difference.hours, difference.minutes, difference.seconds);
    return 0;
}
