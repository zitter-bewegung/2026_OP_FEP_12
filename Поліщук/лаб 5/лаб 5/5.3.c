
#include <stdio.h>

int main() {
    int n, h, t, u;

    char *hundreds[] = {
        "", "one hundred", "two hundred",
        "three hundred", "four hundred",
        "five hundred", "six hundred",
        "seven hundred", "eight hundred",
        "nine hundred"
    };

    char *teens[] = {
        "ten", "eleven", "twelve", "thirteen",
        "fourteen", "fifteen", "sixteen",
        "seventeen", "eighteen", "nineteen"
    };

    char *tens[] = {
        "", "", "twenty", "thirty", "forty",
        "fifty", "sixty", "seventy",
        "eighty", "ninety"
    };

    char *units[] = {
        "", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };

    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    if (n < 100 || n > 999) {
        printf("Invalid number");
        return 0;
    }

    h = n / 100;
    t = (n / 10) % 10;
    u = n % 10;

    printf("%s ", hundreds[h]);

    if (t == 1)
        printf("%s", teens[u]);
    else {
        printf("%s ", tens[t]);
        printf("%s", units[u]);
    }

    return 0;
}
