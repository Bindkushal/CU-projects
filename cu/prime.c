#include <stdio.h>

int main() {
    int a, b, c = 0;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a == 0 || a == 1)
        c = 1;
    else {
        for (b = 2; b <= a / 2; ++b) {
            if (a % b == 0) {
                c = 1;
                break;
            }
        }
    }

    if (c == 0)
        printf("%d is a prime number.\n", a);
    else
        printf("%d is not a prime number.\n", a);

    return 0;
}
