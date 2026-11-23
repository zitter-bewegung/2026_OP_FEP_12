#include <stdio.h>
int main(void){
    int number;
    int *n;
    printf("Введіть число: \n");
    scanf(" %d", &number);
    n = &number;
    printf("Адреса змінної: %p\n", n);
    printf("Значення через вказівник: %d\n", *n);
    
    return 0;
}   