#include <stdio.h>

int main() {
    int N;
    float x, sum = 0, min, max;

    printf("Enter N: ");
    scanf("%d", &N);
    while (N < 7 || N > 12) {
        printf("Enter N from 7 to 12: ");
        scanf("%d", &N);
    }
    for (int i = 1; i <= N; i++) {
        printf("Enter number: ");
        scanf("%f", &x);

        sum = sum + x;

        if (i == 1) {
            min = x;
            max = x;
        }

        if (x < min) min = x;
        if (x > max) max = x;
    }
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", sum / N);
    printf("Min = %.2f\n", min);
    printf("Max = %.2f\n", max);

    return 0;
}