#include <stdio.h>

int main(void) {
    char ch;
    int hol = 0;
    int pryhol = 0;

    printf("Введіть речення: \n");

    for (;;) {
        ch = getchar();
        if (ch == '\n' || ch == '\0') {
            break;
        }

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            hol++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            pryhol++;
        }
    }

    printf("Кількість голосних: %d\n", hol);
    printf("Кількість приголосних: %d\n", pryhol);

    return 0;
}