#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *findElement(int *a, int index)
{
    if (index < 0 || index > 9)
        return NULL;
    return &a[index];
}

int *findElement2D(int matr[12][12], int row, int col)
{
    if (row < 0 || row > 11 || col < 0 || col > 11)
        return NULL;
    return &matr[row][col];
}

int main(void)
{
    int mas[10], matr[12][12];
    int i, j;
    int *p;

    srand(time(NULL));
    for (i = 0; i < 10; ++i)
        mas[i] = rand() % 100;
    for (i = 0; i < 12; ++i)
        for (j = 0; j < 12; ++j)
            matr[i][j] = rand() % 100;

    printf("Одновимірний масив:\n");
    for (i = 0; i < 10; ++i)
        printf("%2d ", mas[i]);
    printf("\n");

    printf("Двовимірний масив 12x12:\n");
    for (i = 0; i < 12; ++i)
    {
        for (j = 0; j < 12; ++j)
            printf("%2d ", matr[i][j]);
        printf("\n");
    }

    for (i = 8; i <= 10; ++i)
    {
        p = findElement(mas, i);
        if (p != NULL)
            printf("mas[%d] = %d\n", i, *p);
        else
            printf("mas[%d] - елемента немає (NULL)\n", i);
    }

    for (i = 10; i <= 12; ++i)
    {
        p = findElement2D(matr, i, i);
        if (p != NULL)
            printf("matr[%d][%d] = %d\n", i, i, *p);
        else
            printf("matr[%d][%d] - елемента немає (NULL)\n", i, i);
    }
    return 0;
}
