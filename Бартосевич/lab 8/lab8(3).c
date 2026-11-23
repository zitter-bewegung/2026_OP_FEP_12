#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void findMinMax(int a[], int n, int *min, int *max, int *sum);

int main(void) {
    int a[20];
    int min, max, sum;

    srand(time(NULL));
    printf("Масив з 20 випадкових чисел:\n");
    for (int i = 0; i < 20; i++) {
        a[i] = rand() % 100;
        printf("%d ", a[i]);
    }
    printf("\n");

    findMinMax(a, 20, &min, &max, &sum);
    printf("Мінімальний елемент: %d\n", min);
    printf("Максимальний елемент: %d\n", max);
    printf("Сума мінімального та максимального: %d\n", min + max);
    printf("Сума всіх елементів: %d\n", sum);
    return 0;
}

void findMinMax(int a[], int n, int *min, int *max, int *sum) {
    *min = a[0];
    *max = a[0];
    *sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < *min) *min = a[i];
        if (a[i] > *max) *max = a[i];
        *sum = *sum + a[i];
    }
}
