#include <stdio.h>
#include <math.h>

int main(void){
    double a, b, c, D, x1, x2;

    printf("Введіть a, b і c: \n");
    scanf(" %lf %lf %lf", &a, &b, &c);
    D = b * b - 4 * a * c;
    printf("Дискримінант: %g\n", D);
    if (D < 0){
        printf("Коренів немає\n");
        return 0;
    }
    else{
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        printf("x1 = %g\n", x1);
        printf("x2 = %g\n", x2);
        return 0;
    }
}