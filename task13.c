
#include <stdio.h>

int main() {
    int mark;

    printf("Enter the student's mark: ");
    scanf("%d", &mark);

    if (mark >= 0 && mark <= 100) {
        if (mark >= 90) {
            printf("Grade: A\n");
        } else if (mark >= 80) {
            printf("Grade: B\n");
        } else if (mark >= 70) {
            printf("Grade: C\n");
        } else if (mark >= 60) {
            printf("Grade: D\n");
        } else if (mark >= 50) {
            printf("Grade: E\n");
        } else {
            printf("Grade: F\n");
        }
    } else {
        printf("Invalid mark. Please enter a value between 0 and 100.\n");
    }

    return 0;
}
