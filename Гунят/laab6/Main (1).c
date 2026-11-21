#include <stdio.h>

int main(void) {
    int i = 1;
    int sum = 0;
    int my_num = 13;
    int exc = 33;

    while (i <= 100) {
        if (i == my_num || i == exc) {
            i++;
            continue;
        }

        sum += i;
        i++;
    }

    printf("Сума перших 100 чисел (без %d та %d) дорівнює: %d\n", my_num, exc, sum);

    return 0;
}