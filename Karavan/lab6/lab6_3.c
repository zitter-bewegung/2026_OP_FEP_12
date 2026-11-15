#include <stdio.h>

int main(void) {
    int N;
    double num;
    double sum = 0;
    double min, max;
    
    do {
        printf("Введіть N (від 7 до 12): ");
        scanf("%d", &N);
    } while (N < 7 || N > 12);
    
    printf("Введіть %d дійсних чисел:\n", N);
    
    for (int i = 0; i < N; i++) {
        scanf("%lf", &num);
        
        sum += num;
        
        if (i == 0) {
            min = num;
            max = num;
        } else {
            if (num < min) min = num;
            if (num > max) max = num;
        }
    }
    
    printf("\nСума = %.2f\n", sum);
    printf("Середнє арифметичне = %.2f\n", sum / N);
    printf("Мінімальне значення = %.2f\n", min);
    printf("Максимальне значення = %.2f\n", max);
    
    return 0;
}