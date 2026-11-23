#include <stdio.h>

int N = 3;
int A = 18;

double f(double x);
double bisection(double a, double b, double eps);

int main(void) {
    printf("Рівняння: %d*x + %d = 0\n", N, A);
    printf("Інтервал: [-100; 100], точність: 0.001\n");
    printf("Розв'язок: x = %.3f\n", bisection(-100, 100, 0.001));
    return 0;
}

double f(double x) {
    return N * x + A;
}

double bisection(double a, double b, double eps) {
    double c;
    while (b - a > eps) {
        c = (a + b) / 2;
        if (f(c) == 0) {
            a = c;
            b = c;
        } else if (f(a) * f(c) < 0) {
            b = c;
        } else {
            a = c;
        }
    }
    return (a + b) / 2;
}
