#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float valueOne;
    float valueTwo;
    char operator;
    float answer;

    printf("Enter calculation (e.g., 2 + 3, 4 * 5, 6 / 2, 7 - 4, 8 ^ 2, 9 s 4): ");
    scanf("%f %c %f", &valueOne, &operator, &valueTwo);

    switch(operator) {
        case '/':
            if (valueTwo != 0)
                answer = valueOne / valueTwo;
            else {
                printf("Error: Division by zero\n");
                return 1; // Exit with error code
            }
            break;
        case '*':
            answer = valueOne * valueTwo;
            break;
        case '+':
            answer = valueOne + valueTwo;
            break;
        case '-':
            answer = valueOne - valueTwo;
            break;
        case '^':
            answer = pow(valueOne, valueTwo);
            break;
        case 's':
            if (valueTwo >= 0)
                answer = sqrt(valueTwo);
            else {
                printf("Error: Square root of a negative number\n");
                return 1; // Exit with error code
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1; // Exit with error code
    }
    printf("%.9g %c %.9g = %.6g\n", valueOne, operator, valueTwo, answer);

    return 0;
}
