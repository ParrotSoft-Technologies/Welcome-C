#include <stdio.h>
#include <math.h>

int main() {
    int S;
    double L;

    printf("Enter the value of S: ");
    scanf("%d", &S);

    if (S >= 100) {
        L = 12000 / (4 + ((double)S * S) / 14900);
    } else {
        L = 3000 - 125 * pow(S, 3);
    }

    printf("The value of L: %.15lf\n", L);

    return 0;
}
