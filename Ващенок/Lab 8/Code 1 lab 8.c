#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void func(int a[], int n)
{
    for (int i = 0; i < n; ++i)
        a[i] = rand() % 100;
}

int main(void)
{
    int a[N];
    srand(time(NULL));

    func(a, N);

    for (int i = 0; i < N; ++i)
        printf("%d ", a[i]);
   
    return 0;
}