#include <stdio.h>

int is_prime(int n);

int main(void) {
    int number;

    printf("Введіть число: ");
    scanf("%d", &number);

    if (is_prime(number) == 1) {
        printf("Число просте");
    } else {
        printf("Число не є простим");
    }

    return 0;
}

int is_prime(int n) {
    int i;

    if (n < 2) {
        return 0;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}