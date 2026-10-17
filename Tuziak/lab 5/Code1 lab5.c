#include <stdio.h>

int main() {
    int a, b;
    printf("Введіть перше ціле число: ");
    scanf("%d", &a);
     printf("Введіть друге ціле число: ");
    scanf("%d", &b);

    (a>b) ? printf("Перше число (%d) більше за друге (%d)\n", a, b) : (a<b) ? printf("Перше число (%d) менше за друге (%d)\n", a, b) : printf("Числа рівні");
    
    return 0;
}