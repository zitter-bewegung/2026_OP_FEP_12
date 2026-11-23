#include <stdio.h>

int main(void){

    int number;

    printf("Введіть число: \n");
    scanf("%d", &number);

    int tens = (number % 100) / 10;
    int units = number % 10;

    switch(number / 100){
        case 1: printf("Сто "); break;
        case 2: printf("Двісті "); break;
        case 3: printf("Триста "); break;
        case 4: printf("Чотириста "); break;
        case 5: printf("П'ятсот "); break;
        case 6: printf("Шістсот "); break;
        case 7: printf("Сімсот "); break;
        case 8: printf("Вісімсот "); break;
        case 9: printf("Дев'ятсот "); break;
    }

    if (tens == 1){
        switch(units){
            case 0: printf("десять "); break;
            case 1: printf("одинадцять "); break;
            case 2: printf("дванадцять "); break;
            case 3: printf("тринадцять "); break;
            case 4: printf("чотирнадцять "); break;
            case 5: printf("п'ятнадцять "); break;
            case 6: printf("шістнадцять "); break;
            case 7: printf("сімнадцять "); break;
            case 8: printf("вісімнадцять "); break;
            case 9: printf("дев'ятнадцять "); break;
        } 
    }
    else{
        switch(tens){
            case 0: break;
            case 2: printf("двадцять "); break;
            case 3: printf("тридцять "); break;
            case 4: printf("сорок "); break;
            case 5: printf("п'ятдесят "); break;
            case 6: printf("шістдесят "); break;
            case 7: printf("сімдесят "); break;
            case 8: printf("вісімдесят "); break;
            case 9: printf("дев'яносто "); break;

        }
        switch(units){
            case 0: break;
            case 1: printf("один "); break;
            case 2: printf("два "); break;
            case 3: printf("три "); break;
            case 4: printf("чотири "); break;
            case 5: printf("п'ять "); break;
            case 6: printf("шість "); break;
            case 7: printf("сім "); break;
            case 8: printf("вісім "); break;
            case 9: printf("дев'ять "); break;
        }
    }
    return 0;
}
