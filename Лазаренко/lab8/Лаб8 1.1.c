
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* numbers() {
    static int a[10];

    for (int i = 0; i < 10; i++) {
        a[i] = rand() % 100;
    }

    return a;
}

int main() {
    srand(time(NULL));

    int *a = numbers();

    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
