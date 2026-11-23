#include <stdio.h>

int main(void)
{
    char text[100];
    int vowels = 0;
    int consonants = 0;

    printf("Введіть речення англійською: ");
    fgets(text, 100, stdin);

    for (int i = 0; text[i] != '\0'; i++)
    {
        char c = text[i];

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            vowels++;
        }
        else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            consonants++;
        }
    }

    printf("К-сть голосних: %d\n", vowels);
    printf("К-сть приголосних: %d\n", consonants);
    return 0;
}