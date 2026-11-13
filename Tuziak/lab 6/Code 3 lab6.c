#include <stdio.h>

int main() {
    int N;
    do {
        printf("Введіть ціле число N (від 7 до 12): ");
        scanf("%d", &N);
        
        if (N < 7 || N > 12) {
            printf("Помилка! Число N має бути в діапазоні від 7 до 12.\n");
        }
    } while (N < 7 || N > 12);

    double num;
    double sum = 0;
    double min, max;

    printf("Введіть %d дійсних чисел:\n", N);

    for (int i = 0; i < N; i++) {
        printf("Число %d: ", i + 1);
        scanf("%lf", &num);

        sum += num;
        
        if (i == 0) {
            min = num;
            max = num;
        } else {
            
            if (num < min) {
                min = num;
            }
            
            if (num > max) {
                max = num;
            }
        }
    }
    double average = sum / N;

    printf("\n--- Результати обчислень ---\n");
    printf("Сума введених чисел: %.2f\n", sum);
    printf("Середнє арифметичне: %.2f\n", average);
    printf("Мінімальне значення: %.2f\n", min);
    printf("Максимальне значення: %.2f\n", max);

    return 0;
}