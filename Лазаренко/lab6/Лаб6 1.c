
#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    wchar_t text[100];
    int голосні = 0;
    int приголосні = 0;

    wprintf(L"Введіть текст: ");
    fgetws(text, 100, stdin);

    for (int i = 0; text[i] != L'\0'; i++) {
        wchar_t c = towlower(text[i]);

        if (c == L'а' || c == L'е' || c == L'є' ||
            c == L'и' || c == L'і' || c == L'ї' ||
            c == L'о' || c == L'у' || c == L'ю' ||
            c == L'я') {
            голосні++;
        }
        else if (iswalpha(c)) {
            приголосні++;
        }
    }

    wprintf(L"Голосні: %d\n", голосні);
    wprintf(L"Приголосні: %d\n", приголосні);

    return 0;
}
