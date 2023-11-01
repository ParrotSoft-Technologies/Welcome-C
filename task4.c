#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int result;

    if (num1 > num2) {
        result = num1 - num2;
    } else {
        result = num2 - num1;
    }

    printf("Result: %d\n", result);

    return 0;
}
