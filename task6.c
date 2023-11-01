#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0 || number % 5 == 0) {
        printf("%d\n", number);
    } else {
        printf("Not a multiple of 2 OR 5\n");
    }

    return 0;
}

