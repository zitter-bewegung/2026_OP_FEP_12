#include <stdio.h>
#include <math.h>

int main(void) {
    double a = 1;
    double b = -5;
    double c = 6;
    double D, x1, x2;

    printf("Kvadratne rivniannia: ax^2 + bx + c = 0\n");
    printf("a = %.0f, b = %.0f, c = %.0f\n", a, b, c);

    D = b * b - 4 * a * c;

    printf("Diskriminant D = %.2f\n", D);

    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);

        printf("Dva kornia:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } else if (D == 0) {
        x1 = -b / (2 * a);
        printf("Odyn korin: x = %.2f\n", x1);
    } else {
        printf("Diisnykh koreniv nemaie\n");
    }

    return 0;
}