#include <stdio.h>
#include <math.h>   

int main(void) {
    double a, b, c;
    
    printf("Введіть довжини трьох сторін трикутника: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Такий трикутник не існує!\n");
        return 0;
    }
    
    // а) за сторонами 
    if (a == b && b == c) {
        printf("Рівносторонній трикутник\n");
    } 
    else if (a == b || a == c || b == c) {
        printf("Рівнобедрений трикутник\n");
    } 
    else {
        printf("Різносторонній трикутник\n");
    }
    
    // б) за кутами
    double max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    
    double eps = 1e-6;   // точність порівняння double
    
    if (fabs(a*a + b*b - c*c) < eps || 
        fabs(a*a + c*c - b*b) < eps || 
        fabs(b*b + c*c - a*a) < eps) {
        printf("Прямокутний трикутник\n");
    }
    else if (a*a + b*b > c*c && a*a + c*c > b*b && b*b + c*c > a*a) {
        printf("Гострокутний трикутник\n");
    }
    else {
        printf("Тупокутний трикутник\n");
    }
    
    return 0;
}