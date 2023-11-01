
#include <stdio.h>

int main() {
    int hour;

    printf("Enter the hour (in 24-hour format): ");
    scanf("%d", &hour);

    if (hour >= 4 && hour <= 6) {
        printf("Breakfast\n");
    } else if (hour >= 12 && hour <= 13) {
        printf("Lunch\n");
    } else if (hour >= 16 && hour <= 17) {
        printf("Snacks\n");
    } else if (hour >= 19 && hour <= 20) {
        printf("Dinner\n");
    } else if (hour >= 0 && hour <= 23) {
        printf("Patience is a virtue\n");
    } else {
        printf("Wrong time\n");
    }

    return 0;
}
