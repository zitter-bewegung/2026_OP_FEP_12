#include <stdio.h>
int main() {
int N;
printf("Введіть число від 7 до 12: ");
scanf("%d", &N);
if (N < 7 || N > 12) {
    return 0;
}
float sum = 0;
float x;
float min, max;
for (int i = 1; i <= N; i++) {
    scanf("%f", &x);
    sum = sum + x;

    if (i == 1) {
        min = x;
        max = x;
    }
    else {
        if (x < min) {
            min = x;
        }
        if (x > max) {
            max = x;
        }
    }
} 
float average = sum / N;
printf("Suma: %.2f\n", sum);
printf("Serednie: %.2f\n", average);
printf("Min: %.2f\n", min);
printf("Max: %.2f\n", max);
return 0;
}
