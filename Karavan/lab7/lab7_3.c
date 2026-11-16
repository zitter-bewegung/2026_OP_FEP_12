#include <stdio.h>
#include <math.h>

double f(double x) {
    return 7 * x + 17;
}

double bisection(void) {
    double a = -100.0;
    double b =  100.0;
    double eps = 0.0001;
    double c;
    
    if (f(a) * f(b) > 0) {
        printf("На відрізку [-100; 100] кореня немає\n");
        return 0;
    }
    
    while ((b - a) >= eps) {
        c = (a + b) / 2.0;
        
        if (fabs(f(c)) < eps) {
            return c;
        }
        
        if (f(a) * f(c) < 0) {
            b = c;
        } else {
            a = c;
        }
    }
    
    return (a + b) / 2.0;
}

int main(void) {
    double root = bisection();
    
    printf("Рівняння: 7x + 17 = 0\n");
    printf("Інтервал: [-100; 100]\n");
    printf("Розв'язок методом половинного ділення:\n");
    printf("x ≈ %.5f\n", root);
    
    printf("Точний розв'язок: x = %.5f\n", -17.0 / 7.0);
    
    return 0;
}