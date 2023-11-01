#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Enter the temperature in degrees Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 0.56;

    printf("%.1f degrees C\n", celsius);

    if (celsius < 20) {
        printf("Winter\n");
    } else if (celsius >= 20 && celsius <= 25) {
        printf("Autumn\n");
    } else if (celsius > 25 && celsius < 30) {
        printf("Spring\n");
    } else if (celsius >= 30) {
        printf("Summer\n");
    }

    return 0;
}
