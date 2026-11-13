#include <stdio.h>

int main() {
     int i=1;
     int sum=0;
     int mynum=21;
    

    while (i <= 100) {   
        if (i != mynum && i != 33) {
            sum += i;
        } 
        i++; 
    }        
    printf("Сума перших 100 чисел (окрім %d та 33) дорівнює: %d\n", mynum, sum);
    return 0;
}