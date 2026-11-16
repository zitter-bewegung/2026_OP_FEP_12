#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){

    int box[10];

    srand(time(NULL));

    for(int i = 0; i<10; i++){
        box[i] = rand() % 100;
    }
    printf("Масив: \n");
    for(int i = 0; i < 10; i++){
        printf("%d ", box[i]);
    }

    return 0;
}