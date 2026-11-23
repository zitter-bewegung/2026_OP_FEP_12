/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    
    int number = 42;

    printf("Ціле число:\n");
    printf("Десятковий формат: %d\n", number);
    printf("Вісімковий формат: %o\n", number);
    printf("Двійковий формат: %b\n", number);
    printf("Шістнадцятковий: %x\n", number);
    printf("Шістнадцятковий (капс): %X\n\n", number);

    float real = 3.14159f;

    printf("Дійсне число:\n");
    printf("З плаваючою комою: %f\n", real);
    printf("Експоненційна форма: %e\n", real);
    printf("Гнучка форма (g): %g\n\n", real);

    char symbol = 'A';
    printf("Символ: %c\n", symbol);

    char text[] = "Добрий день, Васюта Василь Михайлович!";
    printf("Рядок: %s\n", text);

    printf("Вказівник на number: %p\n", (void*)&number);

    return 0;
}


