// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
    char names[11][50];
    char emails[11][50];
    char colors[11][30];

    int i;

    for (i = 0; i < 11; i++) {
        printf("\nСтудент %d\n", i + 1);

        printf("Прізвище: ");
        scanf("%49s", names[i]);

        printf("Ел.пошта: ");
        scanf("%49s", emails[i]);

        printf("Улюблений колір: ");
        scanf("%29s", colors[i]);
    }

    printf("\n");

    printf("\n%-4s %-20s %-25s %-15s\n",
       "№",
       "Прізвище",
       "Ел.пошта",
       "Колір");

printf("--------------------------------------------------------------\n");

for(i = 0; i < 11; i++) {
    printf("%-4d %-20s %-25s %-15s\n",
           i + 1,
           names[i],
           emails[i],
           colors[i]);

}
    return 0;
}