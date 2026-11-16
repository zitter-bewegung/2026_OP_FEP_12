#include <stdio.h>

int main(void) {
    int i = 0, sum = 0;
    int nomer = 4;

    while (i < 100) {
        i++;
        if (i == nomer || i == 33) continue;
        sum = sum + i;
    }

    printf("Сума = %d\n", sum);
    return 0;
}