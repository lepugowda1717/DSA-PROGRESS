#include <stdio.h>

// find the simple interest of
// x rupees over y time and z interest
int main() {
    float x, y, z, simple_interest;

    // Input principal (x), time (y), and rate of interest (z)
    printf("Enter Principal amount (x): ");
    scanf("%f", &x);

    printf("Enter Time in years (y): ");
    scanf("%f", &y);

    printf("Enter Rate of interest (z): ");
    scanf("%f", &z);

    // Calculate simple interest
    simple_interest = (x * y * z) / 100.0;

    // Output the result
    printf("Simple Interest = %.2f\n", simple_interest);

    return 0;
}
