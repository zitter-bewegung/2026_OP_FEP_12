#include <stdio.h>
#include <math.h>
int N = 21;
int A = 17;
double f(double x);
double bisection(double a, double b, double eps);

int main(void) {
    double a = -100;
    double b = 100;  
    double eps = 0.001; 
    double x;

    x = bisection(a, b, eps);

    printf("Рівняння: %d*x + %d = 0\n", N, A);
    printf("Розв'язок методом половинного ділення: x = %.4lf\n", x);
    printf("Перевірка (точний розв'язок -A/N): %.4lf\n", -(double)A / N);

    return 0;
}

double f(double x) {
    return N * x + A;
}

double bisection(double a, double b, double eps) {
    double c;
    while ((b - a) >= eps) {
        c = (a + b) / 2;

       if (f(a) * f(c) < 0) {
            b = c;
        } else {
            a = c;
        }
    }
    return (a + b) / 2;
}