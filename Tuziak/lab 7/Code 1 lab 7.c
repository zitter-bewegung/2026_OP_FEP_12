#include <stdio.h>

int isPrime(int n);

int main(void) {
    int number;
    printf("Введіть число: ");
    scanf("%d", &number);

    if (isPrime(number))
        printf("Це число просте\n");
    else
        printf("Це число не просте\n");
    return 0;
}

int isPrime(int n) {
    int i;
    if (n < 2) return 0;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}