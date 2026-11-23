
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    int x, y, z;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a) {
        printf("Triangle does not exist\n");
        return 0;
    }

    if (a == b && b == c)
        printf("Equilateral triangle\n");
    else if (a == b || a == c || b == c)
        printf("Isosceles triangle\n");
    else
        printf("Scalene triangle\n");

    x = a;
    y = b;
    z = c;

    if (x > y) { int t = x; x = y; y = t; }
    if (y > z) { int t = y; y = z; z = t; }
    if (x > y) { int t = x; x = y; y = t; }

    if (x * x + y * y == z * z)
        printf("Right triangle\n");
    else if (x * x + y * y > z * z)
        printf("Acute triangle\n");
    else
        printf("Obtuse triangle\n");

    return 0;
}
