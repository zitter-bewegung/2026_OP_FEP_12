#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *getElement(int a[], int index);
int *getElement2D(int m[12][12], int i, int j);

int main(void) {
    int a[10], m[12][12];
    int index, i, j;
    int *p;

    srand(time(NULL));
    for (i = 0; i < 10; i++)
        a[i] = rand() % 100;
    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            m[i][j] = i * 100 + j;

    printf("Одновимірний масив: ");
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");
    printf("Двовимірний масив 12x12: m[i][j] = i*100 + j\n");

    printf("Введіть індекс (0-9): ");
    scanf("%d", &index);
    p = getElement(a, index);
    if (p == NULL)
        printf("Елемент відсутній (NULL)\n");
    else
        printf("a[%d] = %d\n", index, *p);

    printf("Введіть два індекси (0-11): ");
    scanf("%d %d", &i, &j);
    p = getElement2D(m, i, j);
    if (p == NULL)
        printf("Елемент відсутній (NULL)\n");
    else
        printf("m[%d][%d] = %d\n", i, j, *p);
    return 0;
}

int *getElement(int a[], int index) {
    if (index < 0 || index >= 10) return NULL;
    return &a[index];
}

int *getElement2D(int m[12][12], int i, int j) {
    if (i < 0 || i >= 12 || j < 0 || j >= 12) return NULL;
    return &m[i][j];
}
