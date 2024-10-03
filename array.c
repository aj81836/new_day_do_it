#include <stdio.h>

int main() {
    // Declare an integer array of 6 elements
    int intArray[6];
    int length = 0;  // You want to add 5 elements to the array

    // Add elements to the array
    for (int i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &intArray[i]);  // Corrected: use &intArray[i] to input each element
    }

    // Print the elements of the array
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", intArray[i]);
    }
    printf("\n");

    return 0;
}
