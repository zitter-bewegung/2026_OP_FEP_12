#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define rows 12
#define cols 12

int *mas_1d(int a[], int indx)
{
    if (indx < 0 || indx >= N)
        return NULL;
    return &a[indx];
}


int *mas_2d(int b[rows][cols], int row, int col)
{
   if (row < 0 || row >= rows || col < 0 || col >= cols)
     return NULL;
   return &b[row][col];
}


int main(void)
{
    int i, j;
    srand(time(NULL));
    int a [N];
    int b [rows][cols];

    for (int i = 0; i < N; ++i)
        a[i] = rand() % 100;

    for (i = 0; i < rows; ++i)
    for (j = 0; j < cols; ++j)
        b [i][j] = rand() % 100;

        printf("Одновимірний масив: ");
         for (i = 0; i < N; ++i)
             printf("%d ", a[i]);
             printf("\n");

        printf("Двовимірний масив: \n ");
         for (i = 0; i < rows; ++i)
             {
         for (j = 0; j < cols; ++j)
         printf("%3d ", b[i][j]);
         printf("\n");   
             }
    printf("Перевірка для одновимірного масиву: \n");
    
    int *m1 = mas_1d(a, 3);
    if (m1 != NULL)
        printf("a[3] = %d\n", *m1);
    else 
        printf("Елемента a[3] не існує (NULL)\n");

    int *m2 = mas_1d(a, 15);
    if (m2 != NULL)
        printf("a[15] = %d\n", *m2);
    else
        printf("Елемента a[15] не існує (NULL)\n\n");

    printf("Перевірка для двовимірного масиву: \n");
    int *m3 = mas_2d(b, 5, 7);
    if (m3 != NULL)
        printf("b[5, 7] = %d\n", *m3);
    else
        printf("Елемента b [5, 7] не існує (NULL)\n");

    int *m4 = mas_2d(b, 13, 0);
    if (m4 != NULL)
       printf("b[13, 0] = %d\n", *m4);
    else
        printf("Елемента b [13, 0] не існує (NULL)\n");
    return 0;
}
