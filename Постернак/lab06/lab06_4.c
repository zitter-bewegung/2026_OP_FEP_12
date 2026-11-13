#include <stdio.h>

int main(void){

    int number;

    printf("Введіть ціле число [7; 12]: ");
    scanf("%d", &number);

    switch(number){
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:{
            double sum = 0, x, min = 0, max = 0;
            for(int i = 0; i < number; i++){
                printf("Введіть число: %d ", i + 1);
                scanf("%lf", &x);
                sum += x;
                if (i == 0 || x < min) min = x;
                if (i == 0 || x > max) max = x;
            }
            printf("Сума чисел: %.2lf\n", sum);
            printf("Середнє арифметичне: %.2f\n", sum / number);
            printf("Максимум: %g\n", max);
            printf("Мінімум: %g\n", min);
            break;
        }
        default: 
            printf("Число має бути в діапазоні [7; 12]\n");
            break;
    }

    return 0;
} 