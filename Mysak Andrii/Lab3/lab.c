#include <stdio.h>

int main(void)
{
    int id1 = 1, id2 = 2, id3 = 3;

    char name1[30], name2[30], name3[30];
    char email1[40], email2[40], email3[40];
    char color1[20], color2[20], color3[20];

    printf("Введіть дані студентів (замість пробілів пишіть _)\n");

    printf("\nСтудент 1\n");
    printf("Прізвище та ініціали: ");
    scanf("%29s", name1);
    printf("Електронна пошта: ");
    scanf("%39s", email1);
    printf("Улюблений колір: ");
    scanf("%19s", color1);

    printf("\nСтудент 2\n");
    printf("Прізвище та ініціали: ");
    scanf("%29s", name2);
    printf("Електронна пошта: ");
    scanf("%39s", email2);
    printf("Улюблений колір: ");
    scanf("%19s", color2);

    printf("\nСтудент 3\n");
    printf("Прізвище та ініціали: ");
    scanf("%29s", name3);
    printf("Електронна пошта: ");
    scanf("%39s", email3);
    printf("Улюблений колір: ");
    scanf("%19s", color3);

    printf("\n");
    printf("==============================================================================\n");
    printf("| №    | Прізвище, Ініціали   | Ел. пошта                 | Улюблений колір |\n");
    printf("==============================================================================\n");
    printf("| %-4d | %-20s | %-25s | %-15s |\n", id1, name1, email1, color1);
    printf("| %-4d | %-20s | %-25s | %-15s |\n", id2, name2, email2, color2);
    printf("| %-4d | %-20s | %-25s | %-15s |\n", id3, name3, email3, color3);
    printf("==============================================================================\n");

    return 0;
}