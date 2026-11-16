
#include <stdio.h>
#include <math.h>

void solveQuadratic(float a, float b, float c) {
    if (a == 0) {
        printf("Це не квадратне рівняння\n");
        return;
    }

    float D = b * b - 4 * a * c;

    if (D > 0) {
        float x1 = (-b + sqrt(D)) / (2 * a);
        float x2 = (-b - sqrt(D)) / (2 * a);

        printf("x1 = %f\n", x1);
        printf("x2 = %f\n", x2);
    }
    else if (D == 0) {
        float x = -b / (2 * a);
        printf("x = %f\n", x);
    }
    else {
        printf("Дійсних коренів немає\n");
    }
}

int main() {
    float a, b, c;

    printf("Введіть a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    solveQuadratic(a, b, c);

    return 0;
}
