/* AIm write a program to read two numbers from the keybord and gives the addition
subtraction and multiplication */
#include<stdio.h>

int main() {
    int a, b;

    printf("Enter the numbers: \n");

    scanf("%d %d", &a, &b);

    int addition = a + b;
    int subtraction = a - b;
    int multiplication = a * b;
    float division = (float)a / b;

    printf("%d + %d = %d\n", a, b, addition);
    printf("%d - %d = %d\n", a, b, subtraction);
    printf("%d * %d = %d\n", a, b, multiplication);
    printf("%d / %d = %.2f\n", a, b, division);

    return 0;
}
