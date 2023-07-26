#include <stdio.h>

int main() {
    int size;
    
    // Get the size of the arrays from the user
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    // Declare two arrays with the given size
    int array1[size], array2[size], vectorSum[size];

    // Input values for the first array
    printf("Enter values for Array 1:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    // Input values for the second array
    printf("\tEnter values for Array 2:\n");
    for (int i = 0; i < size; i++) {
        printf("\t Enter value %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    // Calculate scalar sum
    int scalarSum = 0;
    for (int i = 0; i < size; i++) {
        scalarSum += array1[i] + array2[i];
    }

    // Calculate vector sum and store in the third array
    for (int i = 0; i < size; i++) {
        vectorSum[i] = array1[i] + array2[i];
    }

    // Display scalar sum
    printf("Scalar Sum: %d\n", scalarSum);

    // Display vector sum
    printf("Vector Sum: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", vectorSum[i]);
    }
    printf("\n");

    return 0;
}
