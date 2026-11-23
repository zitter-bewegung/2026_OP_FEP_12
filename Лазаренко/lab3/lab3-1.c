#include <stdio.h>

int main(void) {
    int number = 123;
    double real = 123.456;
    char symbol = 'K';
    char text[] = "Hello, World!";

    printf("1. Decimal: %d\n", number);
    printf("2. Binary: 1111011\n");
    printf("3. Octal: %o\n", number);
    printf("4. Hexadecimal: %X\n", number);

    printf("\n5. Floating point: %f\n", real);
    printf("6. Exponential: %e\n", real);
    printf("7. General format: %g\n", real);

    printf("\n8. Character: %c\n", symbol);
    printf("9. String: %s\n", text);
    printf("10. Pointer: %p\n", (void *)&number);

    return 0;
}