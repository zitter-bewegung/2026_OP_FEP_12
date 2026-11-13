#include <stdio.h>

int main(void){

    int number;
    number = 0;
    int sum;
    sum = 0;
    while (number < 100){
        number++;
        if (number == 17) continue;
        if (number == 33) continue;
        sum += number;
    }
    printf("%d\n", sum);
    return 0;
}