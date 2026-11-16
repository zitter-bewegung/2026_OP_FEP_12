#include <stdio.h>
int main () {
    int i = 1;
    int sum = 0;
 while (i <= 100) {
    if (i != 33 && i !=7) {
    sum = sum + i;
    }
    i++;
 }
    printf ("Suma: %d\n", sum);
    return 0;
}