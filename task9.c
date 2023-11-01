
#include <stdio.h>

int main() {
    int seconds;

    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);

    int hours = seconds / 3600;
    int remainingSeconds = seconds % 3600;
    int minutes = remainingSeconds / 60;
    int finalSeconds = remainingSeconds % 60;

    printf("Hours: %d Minutes: %d Seconds: %d\n", hours, minutes, finalSeconds);

    return 0;
}
