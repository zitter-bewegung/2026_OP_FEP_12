#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, x1, x2;

    printf("Введіть коефіцієнти a, b та c через пробіл: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Помилка при введенні даних!\n");
        return 1;
    }

    if (a == 0) {
        printf("Коефіцієнт 'a' дорівнює 0. Це не квадратне, а лінійне рівняння.\n");
        if (b != 0) {
            x1 = -c / b;
            printf("Розв'язок лінійного рівняння: x = %.2f\n", x1);
        } else {
            if (c == 0) {
                printf("Нескінченна кількість розв'язків.\n");
        } else {
                printf("Розв'язків немає (суперечність).\n");
            }
        }
        return 0;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Дискримінант > 0. Рівняння має два дійсних різних корені:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } 
    else if (discriminant == 0) {
        x1 = -b / (2 * a);
        printf("Дискримінант = 0. Рівняння має один дійсний корінь:\n");
        printf("x1 = x2 = %.2f\n", x1);
    } 
    else {
        printf("Дискримінант < 0. Рівняння не має дійсних коренів.\n");
    }

    return 0;
}