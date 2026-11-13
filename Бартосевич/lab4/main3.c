#include <stdio.h>

int main(void){
    int num;
    int *p;
    printf("Введіть число: \n");
    scanf(" %d", &num);
    p = &num;
    printf("Адреса змінної: %p\n", p);
    printf("Значення через вказівник: %d\n", *p);

    return 0;
}