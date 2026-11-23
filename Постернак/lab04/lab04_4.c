#include <stdio.h>
#include <math.h>
// ax^2 + bx + c = 0
int main(void){
    double a, b, c, D, x1, x2;

    printf("Впишіть коефіцієнти a, b і c: \n");
    scanf(" %lf %lf %lf", &a, &b, &c);
    D = b * b - 4 * a * c;
    printf("Дискримінант: %g\n", D);
    if (D < 0){
        printf("Рішення не існує!");
        return 0;
    }
    else{
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        printf("Перший корінь кв. рівняння: %g\n", x1);
        printf("Другий корінь кв. рівняння: %g\n", x2);
        return 0;
    }
}
