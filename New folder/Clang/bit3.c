#include <stdio.h>

// Function to print the binary representation of a number
void printBinary(int num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 4 == 0) printf(" "); // Add spaces for better readability
    }
    printf("\n");
}

// Function to toggle a bit at a given position
int toggleBit(int num, int bitpos) {
    num ^= (1 << bitpos);
    return num;
}

// Function to set a bit at a given position
int setBit(int num, int bitpos) {
    num |= (1 << bitpos);
    return num;
}

// Function to clear a bit at a given position
int clearBit(int num, int bitpos) {
    num &= ~(1 << bitpos);
    return num;
}

int main() {
    int num, bitpos;

    // Input the number and bit position
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the bit position (0-31): ");
    scanf("%d", &bitpos);

    // Validate bit position
    if (bitpos < 0 || bitpos > 31) {
        printf("Invalid bit position! Please enter a value between 0 and 31.\n");
        return 1;
    }

    // Print original number and its binary representation
    printf("\nOriginal number: %d\n", num);
    printf("Binary: ");
    printBinary(num);

    // Perform operations
    int toggled = toggleBit(num, bitpos);
    int set = setBit(num, bitpos);
    int cleared = clearBit(num, bitpos);

    // Display results
    printf("\nAfter toggling bit %d:\n", bitpos);
    printf("Number: %d\n", toggled);
    printf("Binary: ");
    printBinary(toggled);

    printf("\nAfter setting bit %d:\n", bitpos);
    printf("Number: %d\n", set);
    printf("Binary: ");
    printBinary(set);

    printf("\nAfter clearing bit %d:\n", bitpos);
    printf("Number: %d\n", cleared);
    printf("Binary: ");
    printBinary(cleared);

    return 0;
}
