#include <stdio.h>
int main(void){

    double a, b;
    printf("Введіть перше число: \n");
    scanf("%lf", &a);
    printf("Введіть друге число: \n");
    scanf("%lf", &b);
    printf("%s\n",  (a > b) ? "Перше число більше" : "Перше число менше другого");

    return 0;
}