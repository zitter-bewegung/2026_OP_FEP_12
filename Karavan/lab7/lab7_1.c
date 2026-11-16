#include <stdio.h> 

int is_simple(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n == 3) return 1;
    if (n == 5) return 1;
    
    if (n % 2 == 0) return 0;
    if (n % 3 == 0) return 0;
    if (n % 5 == 0) return 0;
}

int main(void) {
    int number;
    
    printf("Введіть ціле число: ");
    scanf("%d", &number);
    
    if (is_simple(number)) {
        printf("%d є простим числом\n", number);
    } else {
        printf("%d не є простим числом\n", number);
    }
    
    return 0;
}