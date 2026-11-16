#include <stdio.h>

int main(void) {
    char ch;
    int vowels = 0, cons = 0;

    printf("Введіть речення: ");

    for (;;) {
        ch = getchar();
        if (ch == '\n') break;

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch < 'a' || ch > 'z')
            continue;

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowels++;
        else
            cons++;
    }

    printf("Голосних: %d\n", vowels);
    printf("Приголосних: %d\n", cons);
    return 0;
}