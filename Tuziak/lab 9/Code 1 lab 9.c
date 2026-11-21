#include <stdio.h>
#include <string.h>

int main(void) {
    char line[1000];
    char *words[100];
    int a;

    do {
        printf("Enter your phrase (7+ words): ");
        if (fgets(line, sizeof(line), stdin) == NULL)
            return 1;

        a = 0;
        char *split = strtok(line, " \t\r\n");
        while (split != NULL && a < 100) {
            words[a++] = split;
            split = strtok(NULL, " \t\r\n");
        }

        if (a < 7)
            printf("Error: need at least 7 words, got %d.\n", a);
    } while (a < 7);

    for (int w = 0; w < a; w++) {
        for (int i = (int)strlen(words[w]) - 1; i >= 0; --i)
            printf("%c", words[w][i]);
        printf("\n");
    }

    return 0;
}