
#include <stdio.h>

int sum(int n) {
    if (n == 100)
        return 100;

    return n + sum(n + 1);
}

int main() {
    printf("Suma = %d\n", sum(10));
    return 0;
}
