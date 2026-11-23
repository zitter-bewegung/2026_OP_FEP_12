/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void print_binary(int n) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
}

int main() {
    int a = 10, b = 3;

    printf("Арифметичні оператори:\n");
    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    printf("\nІнкремент і декремент:\n");
    printf("a++ = %d\n", a++);
    printf("Після a++ a = %d\n", a);
    printf("++b = %d\n", ++b);

    printf("\nОператори порівняння:\n");
    printf("a > b = %d\n", a > b);
    printf("a < b = %d\n", a < b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);

    printf("\nЛогічні оператори\n");
    printf("(a > 5) && (b < 10) = %d\n", (a > 5) && (b < 10));
    printf("(a > 20) || (b < 5) = %d\n", (a > 20) || (b < 5));
    printf("!(a == b) = %d\n", !(a == b));

    printf("\nПобітові оператори (у двійковому вигляді)\n");
    a = 12;  // 00001100
    b = 10;  // 00001010

    printf("a = "); print_binary(a); printf(" (%d)\n", a);
    printf("b = "); print_binary(b); printf(" (%d)\n", b);

    printf("a & b = "); print_binary(a & b); printf(" (%d)\n", a & b);
    printf("a | b = "); print_binary(a | b); printf(" (%d)\n", a | b);
    printf("a ^ b = "); print_binary(a ^ b); printf(" (%d)\n", a ^ b);
    printf("~a = "); print_binary(~a);    printf(" (%d)\n", ~a);
    printf("a << 1 = "); print_binary(a << 1); printf(" (%d)\n", a << 1);
    printf("a >> 1 = "); print_binary(a >> 1); printf(" (%d)\n", a >> 1);

    return 0;
}
