
#include <stdio.h>

int main() {
    float a = -100, b = 100, x;

    while (b - a > 0.001) {
        x = (a + b) / 2;

        if (10 * x + 17 > 0)
            b = x;
        else
            a = x;
    }

    x = (a + b) / 2;

    printf("x = %f\n", x);

    return 0;
}
