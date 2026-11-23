#include <stdio.h>

int main(void)
{
    int number = 0;
    int sum = 0;
    int my_number = 17;

    while (number < 100)
    {
        number++;
        if (number == my_number) continue;
        if (number == 33) continue;
        sum += number;
    }

    printf("Сума: %d\n", sum);
    return 0;
}