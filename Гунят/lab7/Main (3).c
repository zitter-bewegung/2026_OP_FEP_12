#include <stdio.h>

int proste(int n)
{
    if (n < 2)
        return 0;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main(void)
{
    int n;

    printf("Введіть число: ");
    scanf("%d", &n);

    if (proste(n))
        printf("Число просте\n");
    else
        printf("Число не просте\n");

    return 0;
}