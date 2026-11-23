#include <stdio.h>
// Функція котра переводить число у двійковий формат
void binary(int num){ 
    int i = 7;

    for(i; i >= 0; i --){
        int bit = (num >> i) & 1;
        printf("%d", bit); 
    }
    printf("\n");

    return;
}
// Основна функція
int main(void){
    int number = 34;
    double number2 = 7.467486;
    char symbol = 'B';
    char string[] = "C is the best lang";
    char text[] = "abcdefg";
// Вивід цілого числа у десятковому, двійковому, вісімковому та шістнадцятковому форматі
    printf("Ціле число у десятковому форматі: %d\n", number);
    printf("Ціле число у двійковому форматі: ");
    binary(number);
    printf("Ціле число у вісімковому форматі: %o\n", number);
    printf("Ціле число у шістнадцятковому форматі: %x\n", number);
// Вивід дійсного числа у формі з плаваючою комою, експоненційній та гнучкій
    printf("Дійсне число у формі з плаваючою комою: %f\n", number2);
    printf("Дійсне число у експоненційній формі: %e\n", number2);
    printf("Дійсне число у гнучкій формі: %g\n", number2);
// Вивід символа, стрічки та вказівника
    printf("Символ: %c\n", symbol);
    printf("Стрічка: %s\n", string);
    printf("Вказівник: %p\n", (void*)text);

    return 0;
}
