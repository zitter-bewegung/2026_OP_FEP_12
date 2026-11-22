#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *poshuk(int a[10], int i)
{
    if (i < 0 || i >= 10)
        return NULL;
    return &a[i];
}

int main(void)
{
    int a[10];
    int i;

    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        a[i] = rand() % 100;      // випадкові числа 0..99
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Введіть індекс: ");
    scanf("%d", &i);

    int *p = poshuk(a, i);
    if (p != NULL)
        printf("a[%d] = %d\n", i, *p);
    else
        printf("Елемента немає\n");

    return 0;
}