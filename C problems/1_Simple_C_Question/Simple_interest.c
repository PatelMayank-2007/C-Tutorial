#include <stdio.h>

int main(int argc, char const *argv[])
{
    float i, p, n, r;

    printf("To calculate Simple Interest enter principal amount, rate of interest, and number of years respectively:\n");
    scanf("%f%f%f", &p, &r, &n); // Use & to get the address of the variables

    i = (p * n * r) / 100; // Calculate simple interest
    printf("The Simple Interest is equal to %0.3f\n", i); // Print result

    return 0;
}

