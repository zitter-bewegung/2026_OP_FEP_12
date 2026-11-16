
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void calculate(int a[]) {
    int min = a[0];
    int max = a[0];
    int sum = 0;

    for (int i = 0; i < 20; i++) {
        if (a[i] < min)
            min = a[i];

        if (a[i] > max)
            max = a[i];

        sum += a[i];
    }

    printf("Min = %d\n", min);
    printf("Max = %d\n", max);
    printf("Sum = %d\n", sum);
}

int main() {
    int a[20];

    srand(time(NULL));

    for (int i = 0; i < 20; i++) {
        a[i] = rand() % 100;
        printf("%d ", a[i]);
    }

    printf("\n");

    calculate(a);

    return 0;
}

