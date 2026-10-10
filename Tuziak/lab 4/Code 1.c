// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {

    int a = 15, b = 4;
    printf("Арифметичні оператори\n\n");
    printf("Початкові значення: a = %d, b = %d\n", a, b);
    printf("Додавання a + b = %d\n", a + b);
    printf("Віднімання a - b = %d\n", a - b);
    printf("Множення a * b = %d\n", a * b);
    printf("Цілочисельне ділення a / b = %d\n", a / b);
    printf("Остача від ділення a %% b = %d\n\n", a % b);

    int c = 5;
    printf("Початкове значення: с = %d\n", c);
    printf("Префіксний інкремент = %d \n", ++c);
    printf("Постфіксний інкремент = %d\n", c++);
    printf("Значення c після постфіксного інкременту = %d\n",c);
    printf("Префіксний декремент = %d\n", --c);
    printf("Постфіксний декремент = %d\n", c--);
    printf("Значення c після постфіксного декременту = %d\n\n",c);
    
    printf("Логічні оператори\n\n");
    printf("Логічне I:\n");
    
    int age;
    int HasMoney;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Do you have money? (1 = yes, 0 = no) ");
    scanf ("%d", &HasMoney);
    int CanBuyAlco = (age>=18) && (HasMoney == 1);
    printf("Can buy alco? (1 = yes, 0 = no) %d\n\n", CanBuyAlco); 

    printf("Логічне АБО:\n");

    int cash;
    int card;
    printf("Do you have cash? (1 = yes, 0 = no) ");
    scanf("%d", &cash);
    printf("Do you have card? (1 = yes, 0 = no) ");
    scanf("%d", &card);
    int CanYouPay = (cash ==1) || (card ==1);
    printf("Can you pay? (1 = yes, 0 = no) %d\n\n", CanYouPay);

    printf("Логічне НЕ:\n");
    int isRaining;
    printf("Is it raining? (1 = yes, 0 = no) ");
    scanf("%d", &isRaining);
    int isNotRaining = !isRaining;
    printf("Is it a good weather? %d\n\n", isNotRaining);

    printf("Побітові оператори\n\n");
    unsigned char num1 = 12;
    unsigned char num2 = 10;
    printf("Початкові значення:\n");
    printf("num1 = %d (двійковe: %b)\n", num1, num1);
    printf("num2 = %d (двійковe: %b)\n\n", num2, num2);

    printf("Побітове І:\n");
    unsigned char res_and = num1 & num2;
    printf("Результат: %d (двійкове: %b)\n\n", res_and,
    res_and);

    printf("Побітове АБО:\n");
    unsigned char res_or = num1 | num2;
    printf("Результат: %d (двійкове: %b)\n\n", res_or, res_or);
    
    printf("Побітове виключне АБО:\n");
    unsigned char res_xor = num1 ^ num2;
    printf("Результат: %d (двійково: %b)\n\n", res_xor,res_xor);

    printf("Побітове НЕ:\n");
    unsigned char res_not = ~num1;
    printf("Результат: %u (двійково: %b)\n\n", res_not,res_not);

    printf("Зсув вправо:\n");
    unsigned char res_r = num1 >> 1;
    printf("Результат: %d (двійково: %04b)\n\n", res_r,res_r);

    printf("Зсув вліво:\n");
    unsigned char res_l = num1 << 1;
    printf("Результат: %d (двійково: %b)\n\n", res_l,res_l);
    
    return 0;
}