#include <stdio.h>


double cylinderVolume(double radius, double height) {
    double volume = PI * radius * radius * height;
    return volume;
}

int main() {
    double radius, height;
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);
    double volume = cylinderVolume(radius, height);
    printf("The volume of the cylinder is: %.2lf\n", volume);
    return 0;
}