#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int maxmin(int *massiv);

int main(void){

    int box[20];

    srand(time(NULL));

    for(int i = 0; i < 20; i++){
        box[i] = rand() % 100;
        printf("%d ", box[i]);
    }
    printf("\n");
    maxmin(box);
    
    return 0;
}

int maxmin(int *massiv){

    int min = massiv[0];
    int max = massiv[0];
    int sum = 0;

    for(int a = 0; a < 20; a++){
        sum += massiv[a];
        if(a == 0 || massiv[a] < min) min = massiv[a];
        if(a == 0 || massiv[a] > max) max = massiv[a];
    }

    printf("Максимальний елемент: %d\n", max);
    printf("Мінімальний елемент: %d\n", min);
    printf("Сума елементів: %d\n", sum);
    printf("Сума макс і мін: %d\n", min + max);

    return 0;
}