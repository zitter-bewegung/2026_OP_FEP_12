#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char email[256];
    int valid = 1;

    printf("Enter email address: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\r\n")] = '\0';

    char *at = strchr(email, '@');
    if (at == NULL || strchr(at + 1, '@') != NULL)
        valid = 0;

    if (valid) {
        if (at == email)
            valid = 0;
        for (char *p = email; p < at; p++) {
            unsigned char c = *p;
            if (!(isalnum(c) && c < 128) && c != '.' && c != '_' && c != '-')
                valid = 0;
        }

        int parts = 0, len = 0;
        for (char *p = at + 1; ; p++) {
            unsigned char c = *p;
            if (c == '.' || c == '\0') {
                if (len == 0) valid = 0;     
                if (p[-1] == '-') valid = 0;
                parts++;
                len = 0;
                if (c == '\0') break;
            } else if ((isalnum(c) && c < 128) || c == '-') {
                if (len == 0 && c == '-') valid = 0;
                len++;
            } else {
                valid = 0;
            }
        }
        if (parts != 2 && parts != 3)
            valid = 0;
    }

    if (valid)
        printf("Email is valid\n");
    else
        printf("Email is invalid\n");

    return 0;
}