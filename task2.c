#include <stdio.h>
#include <math.h>

int main() {
    double radius;
    double circumference, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate circumference
    circumference = 2 * M_PI * radius;

    // Calculate area
    area = M_PI * pow(radius, 2);

    printf("Circumference is %lf\n", circumference);
    printf("Area is %lf\n", area);

    return 0;
}
