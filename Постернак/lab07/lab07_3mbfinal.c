#include <stdio.h>

int recurs_sum(int number);

int main(void){

    int u_number;

    printf("Номер в журналі: ");
    scanf("%d", &u_number);

    printf("Сума від номера в журналі до 100: %d", recurs_sum(u_number));

}

int recurs_sum(int number){

    if (number > 100){
        return 0;
    }
    return number + recurs_sum(number + 1);

}