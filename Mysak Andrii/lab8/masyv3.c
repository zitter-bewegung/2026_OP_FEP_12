#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
        a[i] = rand() % 100;
}

int minMaxSum(int a[], int n, int *min, int *max)
{
    int i, sum = 0;
    *min = a[0];
    *max = a[0];
    for (i = 0; i < n; ++i)
    {
        if (a[i] < *min)
            *min = a[i];
        if (a[i] > *max)
            *max = a[i];
        sum = sum + a[i];
    }
    return sum;
}

int main(void)
{
    int mas[20];
    int i, min, max, sum;

    srand(time(NULL));
    fillArray(mas, 20);

    printf("Масив з 20 випадкових чисел:\n");
    for (i = 0; i < 20; ++i)
        printf("%d ", mas[i]);
    printf("\n");

    sum = minMaxSum(mas, 20, &min, &max);
    printf("Мінімальний елемент: %d\n", min);
    printf("Максимальний елемент: %d\n", max);
    printf("Сума мінімального та максимального: %d\n", min + max);
    printf("Сума всіх елементів масиву: %d\n", sum);
    return 0;
}
