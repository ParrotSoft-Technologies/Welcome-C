
#include <stdio.h>

int main() {
    int hours;
    int salary;

    printf("Enter the number of hours worked: ");
    scanf("%d", &hours);

    if (hours >= 0 && hours <= 168) {
        if (hours <= 40) {
            salary = hours * 200;
        } else {
            salary = 8000 + (hours - 40) * 300;
        }

        printf("Weekly salary: %d\n", salary);
    } else {
        printf("Invalid hours. Please enter a value between 0 and 168.\n");
    }

    return 0;
}
