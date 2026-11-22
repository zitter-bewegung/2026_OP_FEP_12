#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void min_max(int a[20], int *max, int *min, int *sum)
{
    int i;

    *max = a[0];
    *min = a[0];

    for (i = 1; i < 20; ++i)
    {
        if (a[i] > *max)
            *max = a[i];
        if (a[i] < *min)
            *min = a[i];
    }

    *sum = *max + *min;
}

int main(void)
{
    int i;
    int a[20];
    int max, min, sum;

    srand(time(NULL));

    for (i = 0; i < 20; ++i)
        a[i] = rand() % 100;

    for (i = 0; i < 20; ++i)
        printf("%2d ", a[i]);
    printf("\n");

    min_max(a, &max, &min, &sum);

    printf("max = %d\n", max);
    printf("min = %d\n", min);
    printf("max + min = %d\n", sum);

    return 0;
}