#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers:");
    scanf ("%d %d", &a, &b);
    a > b ? printf("a > b") :
    a < b ? printf("a < b") :
            printf("a = b");
            
            return 0;
    
}