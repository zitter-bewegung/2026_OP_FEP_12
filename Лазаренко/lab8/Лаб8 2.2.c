
#include <stdio.h>
#include <stddef.h>

int* find(int a[12][12], int i, int j) {
    if (i < 0 || i >= 12 || j < 0 || j >= 12)
        return NULL;

    return &a[i][j];
}

int main() {
    int a[12][12] = {0};
    int i, j;

    a[2][3] = 25;

    printf("Enter i and j: ");
    scanf("%d %d", &i, &j);

    int *p = find(a, i, j);

    if (p == NULL)
        printf("Element not found\n");
    else
        printf("Element = %d\n", *p);

    return 0;
}
