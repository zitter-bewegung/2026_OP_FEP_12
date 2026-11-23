#include <stdio.h>

int main() {
    char s[100];
    int vowels = 0, consonants = 0;

    printf("Enter a sentence: ");
    fgets(s, 100, stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ')
            continue;

        if (s[i] == '\n')
            break;

        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
            s[i] == 'o' || s[i] == 'u')
            vowels++;
        else if ((s[i] >= 'a' && s[i] <= 'z') ||
                 (s[i] >= 'A' && s[i] <= 'Z'))
            consonants++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}