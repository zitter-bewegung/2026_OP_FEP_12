
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    (a > b) ? printf("First number is greater") :
    (a < b) ? printf("Second number is greater") :
    printf("Numbers are equal");

    return 0;
}
