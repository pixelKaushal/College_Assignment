#include <stdio.h>

int main() {
    int a, i;
    int b = 1;
    printf("Enter a positive integer: ");
    if (scanf("%d", &a) != 1 || a < 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    for(i = a; i >= 1; i--) {
        b *= i;
    }
    printf("Factorial of %d is %d\n", a, b);
    return 0;
}

