#include <stdio.h>

int main() {
    float a = -100, b = 100, x;

    while (b - a > 0.001) {
        x = (a + b) / 2;

        if ((12 * a + 17) * (12 * x + 17) < 0)
            b = x;
        else
            a = x;
    }

    printf("X = %.3f", x);

    return 0;
}