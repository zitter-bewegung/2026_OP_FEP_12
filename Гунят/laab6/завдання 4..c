#include <stdio.h>

int main(void) {
    int N;
    double num;
    double sum = 0;
    double avg;
    double min, max;

    printf("Введіть кількість чисел N (від 7 до 12): ");
    scanf("%d", &N);

    printf("Введіть число 1: ");
    scanf("%lf", &num);

    sum = num;
    min = num;
    max = num;

    for (int i = 2; i <= N; i++) {
        printf("Введіть число %d: ", i);
        scanf("%lf", &num);

        sum += num;

        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
    }

    avg = sum / N;

    printf("\n--- Результати ---\n");
    printf("Сума: %.2f\n", sum);
    printf("Середнє арифметичне: %.2f\n", avg);
    printf("Мінімум: %.2f\n", min);
    printf("Максимум: %.2f\n", max);

    return 0;
}