#include <stdio.h>

int main(void) {
    int n;
    float x, sum = 0, min = 0, max = 0, avg;

    do {
        printf("Введіть N (від 7 до 12): ");
        scanf("%d", &n);
    } while (n < 7 || n > 12);

    for (int i = 1; i <= n; i++) {
        printf("Введіть число %d: ", i);
        scanf("%f", &x);

        sum = sum + x;
        if (i == 1) {
            min = x;
            max = x;
        }
        if (x < min) min = x;
        if (x > max) max = x;
    }

    avg = sum / n;
    printf("Сума: %.2f\n", sum);
    printf("Середнє арифметичне: %.2f\n", avg);
    printf("Мінімум: %.2f\n", min);
    printf("Максимум: %.2f\n", max);
    return 0;
}