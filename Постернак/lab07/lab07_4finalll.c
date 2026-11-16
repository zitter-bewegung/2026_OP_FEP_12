#include <stdio.h>

double half_division(int number, int age, double x);

int main(void){

    int my_number;
    int my_age;
    double f_flag = -100;
    double s_flag = 100;
    double t_flag;

    printf("Номер в журналі: ");
    scanf("%d", &my_number);
    printf("Вік: ");
    scanf("%d", &my_age);

    while((s_flag - f_flag) >= 0.001){
        t_flag = (f_flag + s_flag) / 2;
        if (half_division(my_number, my_age, f_flag) * half_division(my_number, my_age, t_flag) < 0){
            s_flag = t_flag;
        }
        else{
            f_flag = t_flag;
        }
    }

    printf("Корінь: %lf", t_flag);

    return 0;

}

double half_division(int number, int age, double x){

    return number * x + age;
}