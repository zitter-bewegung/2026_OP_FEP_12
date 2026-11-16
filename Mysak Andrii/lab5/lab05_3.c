#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Введіть довжини трьох сторін трикутника (наприклад 3 4 5): \n");
    scanf("%d %d %d", &a, &b, &c);

    
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Такого трикутника не існує\n");
        return 0;
    }

    // тип за сторонами
    if (a == b && b == c)
    {
        printf("Трикутник рівносторонній\n");
    }
    else if (a == b || a == c || b == c)
    {
        printf("Трикутник рівнобедрений\n");
    }
    else
    {
        printf("Трикутник різносторонній\n");
    }

    
    int max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    int sum = a * a + b * b + c * c - max * max;
    int maxKvadrat = max * max;

    if (maxKvadrat == sum)
    {
        printf("Трикутник прямокутний\n");
    }
    else if (maxKvadrat < sum)
    {
        printf("Трикутник гострокутний\n");
    }
    else
    {
        printf("Трикутник тупокутний\n");
    }

    return 0;
}
