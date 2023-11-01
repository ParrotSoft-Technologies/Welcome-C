#include <stdio.h>

int main() {
    double distance, time;
    double velocity;

    printf("Enter the distance in meters: ");
    scanf("%lf", &distance);

    printf("Enter the time in seconds: ");
    scanf("%lf", &time);

    velocity = (distance / 1000) / (time / 3600); // Conversion to km/h

    printf("Velocity: %.1lf km/h\n", velocity);

    if (velocity < 60) {
        printf("Too slow. Needs more changes.\n");
    } else if (velocity >= 60 && velocity <= 90) {
        printf("Velocity is okay. The car is ready!\n");
    } else {
        printf("Too fast. Only a few changes should suffice.\n");
    }

    return 0;
}

