#include <stdio.h>

int sum(int n);

int main(void) {
    int number;

    printf("Номер в журналі: ");
    scanf("%d", &number);

    printf("Сума від номера до 100: %d", sum(number));

    return 0;
}

int sum(int n) {
    if (n > 100) {
        return 0;
    }
    return n + sum(n + 1);
}