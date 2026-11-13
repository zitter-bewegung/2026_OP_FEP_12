#include <stdio.h>

int main(void) {
    int a = 10, b = 3;

    printf("Aritmetychni operatory:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);
    printf("-a = %d\n", -a);

    printf("\nOperatory porivniannia:\n");
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    printf("\nLogichni operatory:\n");
    printf("(a > 0) && (b > 0): %d\n", (a > 0) && (b > 0));
    printf("(a < 0)  (b > 0): %d\n", (a < 0)  (b > 0));
    printf("!(a > b): %d\n", !(a > b));

    printf("\nPobitovi operatory:\n");
    printf("a = %d, b = %d\n", a, b);
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);

    printf("\nInkremement i dekrement:\n");
    printf("a++ = %d\n", a++);
    printf("Pisl a++: a = %d\n", a);
    printf("b-- = %d\n", b--);
    printf("Pisl b--: b = %d\n", b);

    return 0;
}