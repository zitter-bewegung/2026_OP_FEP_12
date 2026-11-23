#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *randomArray(void);

int main(void) {
    int *a;
    srand(time(NULL));
    a = randomArray();

    printf("Масив з 10 випадкових чисел:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}

int *randomArray(void) {
    static int a[10];
    for (int i = 0; i < 10; i++)
        a[i] = rand() % 100;
    return a;
}
