int main() {

    int number;
    int *ptr = &number;
    printf("Введіть ціле число: ");
    scanf("%d", ptr);
    printf("Введене значення: %d\n", *ptr);
    printf("Адреса змінної в пам'яті: %p\n", (void*)ptr);
    return 0;
}