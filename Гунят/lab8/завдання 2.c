#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void zapovnyty(int mas[], int n)
{
    for (int i = 0; i < n; i++)
    {
        mas[i] = rand() % 100;
    }
}

int main(void)
{
    srand(time(NULL));
    int m[10];

    zapovnyty(m, 10);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", m[i]);
    }
    printf("\n");

    return 0;
}