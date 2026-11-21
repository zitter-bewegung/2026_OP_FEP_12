#include <stdio.h>

int sum(int n) {
    if (n > 100) return 0;
    return n + sum(n + 1);
}

int main() {
    int N = 12;
    int result = sum(N);

    printf("Сума чисел від %d до 100 дорівнює: %d\n", N, result);

    return 0;
}