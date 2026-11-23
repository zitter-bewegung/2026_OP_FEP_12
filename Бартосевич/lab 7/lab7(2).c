#include <stdio.h>

int sum(int n);

int main(void) {
    int n = 3;
    printf("Сума чисел від %d до 100 = %d\n", n, sum(n));
    return 0;
}

int sum(int n) {
    int result;
    if (n >= 100) return 100;
    result = n + sum(n + 1);
    return result;
}
