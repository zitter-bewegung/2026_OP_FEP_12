#include <stdio.h>

int sum_recurs(int n) {
    if (n > 100) {
        return 0;
    }
    return n + sum_recurs(n + 1);
}

int main(void) {
    int journal;
    
    printf("Введіть ваш номер у журналі: ");
    scanf("%d", &journal);
    
    int result = sum_recurs(journal);
    
    printf("Сума чисел від %d до 100 = %d\n", journal, result);
    
    return 0;
}