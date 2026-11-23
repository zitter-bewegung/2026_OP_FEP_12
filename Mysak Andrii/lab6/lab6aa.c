#include <stdio.h>

int main(void)
{
    int n;
    double x, sum = 0, min = 0, max = 0;

    do
    {
        printf("Введіть ціле число N [7; 12]: ");
        scanf("%d", &n);
    } while (n < 7 || n > 12);

    for (int i = 1; i <= n; i++)
    {
        printf("Введіть число %d: ", i);
        scanf("%lf", &x);

        sum += x;
        if (i == 1 || x < min) min = x;
        if (i == 1 || x > max) max = x;
    }

    printf("Сума чисел: %.2f\n", sum);
    printf("Середнє арифметичне: %.2f\n", sum / n);
    printf("Мінімум: %g\n", min);
    printf("Максимум: %g\n", max);
    return 0;
}