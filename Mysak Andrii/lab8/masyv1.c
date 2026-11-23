#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *generateArray(void)
{
    static int mas[10];
    int i;
    for (i = 0; i < 10; ++i)
        mas[i] = rand() % 100;
    return mas;
}

int main(void)
{
    int *p;
    int i;

    srand(time(NULL));
    p = generateArray();

    printf("Індекс:   ");
    for (i = 0; i < 10; ++i)
        printf("%3d", i);
    printf("\n");

    printf("Значення: ");
    for (i = 0; i < 10; ++i)
        printf("%3d", p[i]);
    printf("\n");
    return 0;
}
