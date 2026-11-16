#include <stdio.h>

int main(void) {
    int a, b;
    printf("Введіть два числа: ");
    scanf("%d %d", &a, &b);

    a > b ? printf("Перше число більше\n")
          : (a < b ? printf("Друге число більше\n")
                   : printf("Числа рівні\n"));
    return 0;
}