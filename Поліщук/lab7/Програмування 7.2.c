#include <stdio.h>

int sum(int n) {
    if (n == 100)
        return 100;

    return n + sum(n + 1);
}

int main() {
    printf("Sum = %d", sum(12));

    return 0;
}