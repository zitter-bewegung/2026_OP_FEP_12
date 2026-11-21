#include <stdio.h>

int main() {
    double N = 12.0;
    double A = 17.0;
    double a = -100.0, b = 100.0, c;

    while ((b - a) >= 0.001) {
        c = (a + b) / 2.0;

        if ((N * a + A) * (N * c + A) < 0) {
            b = c;
        } else {
            a = c;
        }
    }

    printf("x = %.3f\n", (a + b) / 2.0);

    return 0;
}