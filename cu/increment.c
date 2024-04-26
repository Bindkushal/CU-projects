#include <stdio.h>

// Function to increment a given integer by 1
int increment(int x) {
    return x + 1;
}

int main() {
    int num = 5; // Initialize a variable with a value
    printf("Before increment: %d\n", num);

    // Call the increment function to increase the value by 1
    num = increment(num);

    printf("After increment: %d\n", num);
    
    return 0;
}


/*#include <stdio.h>

int main() {
    int num = 5; // Initialize a variable with a value

    // Increment num using the ++ operator
    num++;
    printf("After increment using ++: %d\n", num);

    // Decrement num using the -- operator
    num--;
    printf("After decrement using --: %d\n", num);

    return 0;
}
*\
