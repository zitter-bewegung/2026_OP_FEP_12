#include <stdio.h>

int main(void){
    double n1;
    double n2;
    int a = 0b1011;
    int b = 0b0110;
    printf("Введіть перше число: \n");
    scanf(" %lf", &n1);
    printf("Введіть друге число: \n");
    scanf(" %lf", &n2);

    printf("Сума: %g\n", n1 + n2);
    printf("Різниця: %g\n", n1 - n2);
    printf("Добуток: %g\n", n1 * n2);
    printf("Частка: %g\n", n1 / n2);
    printf("Остача: %d\n", (int)n1 % (int)n2);

    if (n1 > 0 && n2 > 0){
        printf("Обидва числа додатні\n");
    }
    if (n1 < 0 || n2 < 0){
        printf("Є від'ємне число\n");
    }
    if (!n2){
        printf("Друге число дорівнює нулю\n");
    }

    if (n1 > n2){
        printf("Перше число більше за друге\n");
    }
    if (n1 >= n2){
        printf("Перше число більше або дорівнює другому\n");
    }
    if (n1 < n2){
        printf("Перше число менше за друге\n");
    }
    if (n1 <= n2){
        printf("Перше число менше або дорівнює другому\n");
    }
    if (n1 == n2){
        printf("Числа однакові\n");
    }
    if (n1 != n2){
        printf("Числа різні\n");
    }

    n1++;
    printf("Перше число після ++: %g\n", n1);
    n1--;
    n1--;
    printf("Перше число після --: %g\n", n1);
    n2++;
    printf("Друге число після ++: %g\n", n2);
    n2--;
    n2--;
    printf("Друге число після --: %g\n", n2);

    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a >> 1 = %d\n", a >> 1);
    printf("a << 2 = %d\n", a << 2);

    return 0;
}