#include <stdio.h>

int main(void) {
    int x = 25;
    int *p = &x;

    printf("Zminna x = %d\n", x);
    printf("Adresa zminnoi x: %p\n", (void*)&x);
    printf("Adresa vkazivnyka p: %p\n", (void*)p);
    printf("Znachenia cherez vkazivnyk: %d\n", *p);

    return 0;
}