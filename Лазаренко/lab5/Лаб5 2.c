# include <stdio.h>
int main () {
    int a, b, c;
    printf ("Enter three sides:");
    scanf("%d %d %d", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c ||
        b + c <= a || c + a <= b) {
        printf ("triangle does not exist\n");
        return 0;
    }
if (a == b && b == c) {
    printf("Рівносторонній трикутник\n");
    }
else if (a == b || a == c || b == c ) {
    printf ("Рівнобедрений трикутник\n");
    }
else {
   printf ("Розносторонній трикутник\n"); 
    }
long long x = a , y = b , z = c;
long long temp;
if (x > z) {
    temp = x;
    x = z;
    z = temp;
    }
if (y > z) {
    temp = y;
    y = z;
    z = temp;
    }
if (x*x + y*y == z*z) {
    printf("Прямокутний трикутник\n");
    }
   else if (x*x + y*y > z*z) {
        printf("Гострокутний трикутник\n");
    }
    else {
        printf("Тупокутний трикутник\n");
    }

    return 0;  
} 