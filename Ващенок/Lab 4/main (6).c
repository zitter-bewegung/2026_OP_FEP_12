/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int number;

    printf("Введіть число: ");
    scanf("%d", &number);

    int *ptr = &number;   // ptr зберігає адресу number

    printf("\nЗначення змінної number = %d\n", number);
    printf("Адреса змінної number = %p\n", &number);
    printf("Значення через вказівник *ptr = %d\n", *ptr);
    printf("Адреса, яку зберігає ptr = %p\n", ptr);

    return 0;
}