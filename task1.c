#include <stdio.h>

int main() {
    int num1, num2;
    int sum, product, difference;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate sum
    sum = num1 + num2;

    // Calculate product
    product = num1 * num2;

    // Calculate difference
    difference = num1 - num2;

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);
    printf("Difference = %d\n", difference);

    return 0;
}
