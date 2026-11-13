#include <stdio.h>
int sum (int n);

int main(void) {
    int mynum = 21;
    int result;
     result = sum (mynum);
    printf("Сума чисел від %d до 100: %d", mynum, result);
    return 0;
}
int sum (int n) {
    if (n>100) {
        return 0;
    }
    return n + sum (n + 1);
}