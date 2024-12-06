#include <stdio.h>
int main() {
    int a, i;
    int b = 1;
    printf("Enter a number: ");
    scanf("%d", &a);
    for(i = a; i >= 1; i--) {
        b *= i;
    }
    printf(" %d\n",b);
    return 0;
}

