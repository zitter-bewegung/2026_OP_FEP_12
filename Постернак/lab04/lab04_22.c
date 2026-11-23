#include <stdio.h>

int main(void){
    double numb1;
    double numb2;
    int a = 0b1100; // 12
    int b = 0b1010; // 10
    printf("Введіть перше число: \n");
    scanf(" %lf", &numb1);
    printf("Введіть друге число: \n");
    scanf(" %lf", &numb2);

// Арифметичні операції
    printf("Додавання: %g\n", numb1 + numb2);
    printf("Віднімання: %g\n", numb1 - numb2);
    printf("Множення: %g\n", numb1 * numb2);
    printf("Ділення: %g\n", numb1 / numb2);
    printf("Остача: %d\n", (int)numb1 % (int)numb2);


    

// Логічні операції
if (numb1 == 0 && numb2 == 0){
    printf("Вітаю два нулі\n");
}
if (numb1 == -4 || numb2 == -4){
    printf("Вітаю ви ввели -4 в одному з рядків\n");
}
if (!numb1){
    printf("Перше число дорівнює нулю\n");
}

// Оператори порівняння
if (numb1 > numb2){
    printf("Перше число більше другого\n");
}
if (numb1 >= numb2){
    printf("Перше число рівне або більше другого\n");
}
if (numb1 < numb2){
    printf("Перше число менше другого\n");
}
if (numb1 <= numb2){
    printf("Перше число рівне або меньше за друге\n");
}
if (numb1 == numb2){
    printf("Перше число дорівнює другому\n");
}
if (numb1 != numb2){
    printf("Перше число не дорівнює другому\n");
}

// Інкремент та декремент
    numb1++;
    printf("Інкремент першого числа: %g\n", numb1);
    numb1--;
    numb1--;
    printf("Декремент першого числа: %g\n", numb1);
    numb2++;
    printf("Інкремент другого числа: %g\n", numb2);
    numb2--;
    numb2--;
    printf("Декремент другого числа: %g\n", numb2);

// Побітові операції
    printf("Побітова операція &%d\n", a & b);
    printf("Побітова операція |%d\n", a | b);
    printf("Побітова операція ^%d\n", a ^ b);
    printf("Побітова операція ~%d\n", ~a);
    printf("Побітова операція >>%d\n", a >> 2);
    printf("Побітова операція <<%d\n", a << 2);

    return 0;
}

