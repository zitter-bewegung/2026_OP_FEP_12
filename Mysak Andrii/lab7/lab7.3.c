#include <stdio.h>

double f(int N, int A, double x);

int main(void) {
    int N, A;
    double a = -100;
    double b = 100;
    double c;

    printf("Номер в журналі: ");
    scanf("%d", &N);
    printf("Вік: ");
    scanf("%d", &A);

    while (b - a >= 0.001) {
        c = (a + b) / 2;

        if (f(N, A, a) * f(N, A, c) < 0) {
            b = c;
        } else {
            a = c;
        }
    }

    printf("Корінь: %lf", (a + b) / 2);

    return 0;
}

double f(int N, int A, double x) {
    return N * x + A;
}