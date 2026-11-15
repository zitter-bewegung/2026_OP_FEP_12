#include <stdio.h>

int main(void) {
    int journal;
    int sum = 0;
    int i = 1;
    
    printf("Введіть ваш номер у журналі: ");
    scanf("%d", &journal);
    
    while (i <= 100) {
        
        if (i == journal || i == 33) {
            i++;
            continue;
        }
        
        sum = sum + i;
        i++;
    }
    
    printf("Сума = %d\n", sum);
    
    return 0;
}
