// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
    int a = 123;
    double b = 123.456;
    char c = 'k';
    char s[] = "abc";
 
    printf("Десяткове: %d\n", a);
    printf("Вісімкове: %o\n", a);
    printf("Шістнaдцяткове: %x\n", a);
    printf("Двійкове: %b\n\n", a);
    printf("З плаваючою комою: %f\n", b);
    printf("Експоненційна форма: %e\n", b);
    printf("Гнучка форма: %g\n\n", b);
    printf("Символ: %c\n", c);
    printf("Стрічка: %s\n", s);
    printf("Вказівник: %p", s);
    
    return 0;
}