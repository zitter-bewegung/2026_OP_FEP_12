#include <stdio.h>

int isPrime(int n);

int main(void) {
    int num;
    printf("Введіть число: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("Число %d є простим\n", num);
    else
        printf("Число %d не є простим\n", num);
    return 0;
}

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
