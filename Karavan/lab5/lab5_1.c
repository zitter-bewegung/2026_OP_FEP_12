#include <stdio.h>

int main(void) {
    int a, b;
    
    printf("Введіть два цілих числа: ");
    scanf("%d %d", &a, &b);
    
    printf("Більше число: %d\n", (a > b) ? a : b);
    
    return 0;
}