#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *poshuk(int a[12][12], int i, int j)
{
    if (i < 0 || i >= 12 || j < 0 || j >= 12)
        return NULL;
    return &a[i][j];
}

int main(void)
{
    int a[12][12];
    int i, j;

    srand(time(NULL));

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            a[i][j] = rand() % 100;   // випадкові числа 0..99
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Введіть індекси i j: ");
    scanf("%d %d", &i, &j);

    int *p = poshuk(a, i, j);
    if (p != NULL)
        printf("a[%d][%d] = %d\n", i, j, *p);
    else
        printf("Елемента немає\n");

    return 0;
}