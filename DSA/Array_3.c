#include <stdio.h>

#define SIZE 5 // Size of the array

int main() {
    int array[SIZE]; // Declaration of array
    int i;

    // Input values into the array
    printf("Enter %d elements into the array:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &array[i]);
    }

    // Displaying the elements of the array
    printf("Elements in the array are:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}