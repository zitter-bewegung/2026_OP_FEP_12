#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 20

void mas (int a[], int n)
{
for (int i = 0; i < n; ++i)
    a[i] = rand() % 100;
}

void min_max_sum (int a[], int n, int *min, int *max, int *sum)
{
*min = a[0];
*max = a[0];
*sum = 0;

    for(int i = 0; i < n; ++i)
        {
            if (a[i] < *min)
            *min = a[i];
            if (a[i] > *max)
            *max = a[i];
            *sum += a[i];
        }
}        

int main(void) {
    
srand(time(NULL)); 
int a[N];
int min, max, sum;

mas (a, N);

printf("Масив з %d елементів:\n", N);
    for (int i = 0; i < N; ++i)
    printf("%d ", a[i]);
    printf("\n\n");
    
min_max_sum (a, N, &min, &max, &sum);

printf("Мінімальний елемент: %d\n", min);
printf("Максимальний елемент: %d\n", max);
printf("Сума всіх елементів: %d\n", sum);
printf("Сума мксимального та мінімального елементів: %d\n", min + max);
    
}
