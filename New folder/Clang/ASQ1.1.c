#include <stdio.h>
#include<limits.h>

// Function to perform calculations and display results
void performCalculations(int a, int b) {
    printf("For integers: %d and %d\n", a, b);
    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);
    printf("-------------------------------\n");
}

int main() {
    // Declare variables for different data types
    signed char sc1, sc2;
    unsigned char uc1, uc2;
    int i1, i2;
    long l1, l2;

    // Input and calculations for signed char
    printf("Enter two signed char numbers (between %d and %d):\n",SCHAR_MAX);
    scanf(" %hhd %hhd", &sc1, &sc2);
    performCalculations(sc1, sc2);

    // Input and calculations for unsigned char
    printf("Enter two unsigned char numbers (between %d and %d):\n", 0, UCHAR_MAX);
    scanf(" %hhu %hhu", &uc1, &uc2);
    performCalculations(uc1, uc2);

    // Input and calculations for int
    printf("Enter two int numbers:\n");
    scanf("%d %d", &i1, &i2);
    performCalculations(i1, i2);

    // Input and calculations for long
    printf("Enter two long numbers:\n");
    scanf("%ld %ld", &l1, &l2);
    performCalculations((int)l1, (int)l2);

    return 0;
}
