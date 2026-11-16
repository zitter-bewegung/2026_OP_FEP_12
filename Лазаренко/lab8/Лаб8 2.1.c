
#include <stdio.h>
#include <stddef.h>

int* find(int a[], int i) {
    if (i < 0 || i >= 10)
        return NULL;

    return &a[i];
}

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;

    printf("Index: ");
    scanf("%d", &i);

    int *p = find(a, i);

    if (p == NULL)
        printf("Element not found\n");
    else
        printf("Element = %d\n", *p);

    return 0;
}
