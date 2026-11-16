#include <stdio.h>

int basic(int n);

int main(void){

    int number;

    printf("Введіть число для перевірки: ");
    scanf("%d", &number);
    if(number <= 1){
        printf("Число не є ні простим ні складеним");
        return 0;
    }

    basic(number);

}

int basic(int n){

    int i = 2;
    int b = 0;
    int check = 0;
    for(i; i < n; i++){
        int temp = n % i;
        if(temp == 0){
            check++;
        }
    }
    if(check > 0){
        printf("Число складене");
        return 0;
    }
    else{
        printf("Число просте");
        return 1;
    }

}