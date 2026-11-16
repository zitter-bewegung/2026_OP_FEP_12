#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int* box2d(int massiv[12][12], int line, int column);


int main(void){

    int box[12][12];
    int itsline;
    int itscolumn;

    srand(time(NULL));

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            box[i][j] = rand() % 100;
            printf("%3d ", box[i][j]);
        }
        printf("\n");
    }

    printf("Оберіть індекс рядка для виведення адреси двомірного массиву [0;11]: ");
    scanf("%d", &itsline);
    printf("Оберіть індекс колонки для виведення адреси двомірного массиву [0;11]: ");
    scanf("%d", &itscolumn);

    int *a = box2d(box, itsline, itscolumn);

    if (a == NULL){
        printf("Ви вийшли за межі массиву!");
        return 0;
    }
    else{
        printf("%p", a);
        return 0;
    }
    return 0;
}

int* box2d(int massiv[12][12], int line, int column){

    if (line < 0 || line > 11 || column < 0 || column > 11){
        return NULL;
    } 
    else{
        return &massiv[line][column];
    }
}
