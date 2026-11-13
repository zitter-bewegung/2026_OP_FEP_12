#include <stdio.h>

void corners(){
    int corn1, corn2, corn3;
    printf("Градусна міра 1-го кута: \n");
    scanf("%d", &corn1);
    printf("Градусна міра 2-го кута: \n");
    scanf("%d", &corn2);
    printf("Градусна міра 3-го кута: \n");
    scanf("%d", &corn3);

    if (corn1 + corn2 + corn3 != 180){
        printf("Такого трикутника не існує \n");
    }
    else if (corn1 == 90 || corn2 == 90 || corn3 == 90){
        printf("Трикутник прямокутний \n");
    }
    else if(corn1 < 90 && corn2 < 90 && corn3 < 90){
        printf("Трикутник гострокутний \n");
    }
    else{
        printf("Трикутник тупокутний \n");
    }   
}

void sides(){
    int a, b, c;
    printf("Введіть довжину 1-ї сторони: \n");
    scanf("%d", &a);
    printf("Введіть довжину 2-ї сторони: \n");
    scanf("%d", &b);
    printf("Введіть довжину 3-ї сторони: \n");
    scanf("%d", &c);
    if (a == b && a == c && b == c){
        printf("Трикутник рівносторонній \n");
    }
    else if(a == b || a == c || b == c){
        printf("Трикутник рівнобедрений \n");
    }
    else{
        printf("Трикутник різносторонній \n");
    }
}

int main(void){
    sides();
    corners();
    return 0;
}
