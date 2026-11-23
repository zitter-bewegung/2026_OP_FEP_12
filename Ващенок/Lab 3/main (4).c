/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    // Дані трьох студентів
    char surname1[30], surname2[30], surname3[30];
    char email1[40], email2[40], email3[40];
    char color1[20], color2[20], color3[20];

    // Введення даних
    printf("Студент 1, введіть.\n");
    printf("Прізвище: ");
    scanf("%s", surname1);
    printf("Ел.пошта: ");
    scanf("%s", email1);
    printf("Улюблений колір: ");
    scanf("%s", color1);

    printf("\nСтудент 2, введіть.\n");
    printf("Прізвище: ");
    scanf("%s", surname2);
    printf("Ел.пошта: ");
    scanf("%s", email2);
    printf("Улюблений колір: ");
    scanf("%s", color2);

    printf("\nСтудент 3, введіть.\n");
    printf("Прізвище: ");
    scanf("%s", surname3);
    printf("Ел.пошта: ");
    scanf("%s", email3);
    printf("Улюблений колір: ");
    scanf("%s", color3);

    // Виведення таблиці
    printf("\n\n");
    printf("---------------------------------------------------------------\n");
    printf("| № | Прізвище      | Ел.пошта              | Улюблений колір |\n");
    printf("---------------------------------------------------------------\n");
    printf("| 1 | %-12s | %-20s | %-15s |\n", surname1, email1, color1);
    printf("| 2 | %-12s | %-20s | %-15s |\n", surname2, email2, color2);
    printf("| 3 | %-12s | %-20s | %-15s |\n", surname3, email3, color3);
    printf("---------------------------------------------------------------\n");

    return 0;
}

