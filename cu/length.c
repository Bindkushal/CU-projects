#include <stdio.h>
// Function to calculate the length of a string
int stringLength(char *str) {
    int length = 0;
    // Iterate through the string until the null terminator is encountered
    while (*str != '\0') {
        length++;
        str++; // Move to the next character in the string
    }
    return length;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    // Call the function to get the length of the string
    int length = stringLength(str);
    printf("Length of the string: %d\n", length);
    return 0;
}


