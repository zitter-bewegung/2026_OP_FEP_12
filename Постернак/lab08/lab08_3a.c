#include <stdio.h>

int* ukaz(int *massiv, int index);

int main(void){
    int box[10] = {3, 1, 12, 56, 34, 78, 6, 7, 9, 10};
    int ch_index;

    printf("Оберіть індекс для виведення адреси [0;9]: ");
    scanf("%d", &ch_index);

    int *a = ukaz(box, ch_index);

    if(a == NULL){
        printf("Ви вийшли за межі массиву!");
    }
    else{
        printf("%p", a);
    }

}

int* ukaz(int *massiv, int index){
    if(index < 0 || index > 9){
        return NULL;
    }
    else{
        return &massiv[index];
   }
}