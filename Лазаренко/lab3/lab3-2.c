#include <stdio.h>

int main(void) {
    char surname[3][50];
    char initials[3][20];
    char email[3][60];
    char color[3][30];
    int i;

    for (i = 0; i < 3; i++) {
        printf("\nPerson %d\n", i + 1);

        printf("Enter surname: ");
        scanf("%49s", surname[i]);

        printf("Enter initials: ");
        scanf("%19s", initials[i]);

        printf("Enter email: ");
        scanf("%59s", email[i]);

        printf("Enter favorite color: ");
        scanf("%29s", color[i]);
    }

    printf("\n");
    printf("+----+----------------------+------------+------------------------------+------------------+\n");
    printf("| No | Surname              | Initials   | Email                        | Favorite color   |\n");
    printf("+----+----------------------+------------+------------------------------+------------------+\n");

    for (i = 0; i < 3; i++) {
        printf("| %-2d | %-20s | %-10s | %-28s | %-16s |\n",
               i + 1, surname[i], initials[i], email[i], color[i]);
    }

    printf("+----+----------------------+------------+------------------------------+------------------+\n");

    return 0;
}