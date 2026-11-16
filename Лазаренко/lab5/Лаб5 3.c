#include <stdio.h>
int main (){
    int n, a, b, c;
    printf ("Ведіть тризначне число");
    scanf ("%d", &n);
if (n < 100 || 999 < n) {
    printf ("Нeдійсне числo\n");
    return 0;
}
a = n / 100;
b = (n / 10) % 10;
c = n % 10;

switch (a) {
   case 1: printf("cто "); break;
   case 2: printf("двісті "); break;
   case 3: printf("триста "); break;
   case 4: printf("чотириста "); break;
   case 5: printf("пʼятсот "); break;
   case 6: printf("шістсот "); break;
   case 7: printf("сімсот "); break;
   case 8: printf("вісімсот "); break;
   case 9: printf("девʼятьсот "); break;
}
switch (b) {
   case 1:
   switch (c) {
    case 1: printf("десять "); break;
    case 2: printf("одинадцять "); break;
    case 3: printf("тринадцать "); break;
    case 4: printf("чотирнадцять "); break;
    case 5: printf("пʼятнадцять "); break;
    case 6: printf("шістнадцять "); break;
    case 7: printf("сімнадцять "); break;
    case 8: printf("вісімнадцять "); break;
    case 9: printf("девʼятнадцять "); break;
    }
    case 2: printf("двадцать "); break;
    case 3: printf("тридцать "); break;
    case 4: printf("сорок "); break;
    case 5: printf("пʼятдесят "); break;
    case 6: printf("шістедят "); break;
    case 7: printf("сімдесят "); break;
    case 8: printf("вісімдесят "); break;
    case 9: printf("девʼвяносто "); break;
    }
if (b != 1) {
switch (c) {
    case 1: printf("один");break;
    case 2: printf("два");break;
    case 3: printf("три");break;
    case 4: printf("чотири");break;
    case 5: printf("пʼять");break;
    case 6: printf("шість");break;
    case 7: printf("сім");break;
    case 8: printf("вісім");break;
    case 9: printf("девʼять");break;
}
}
printf("\n");

    return 0;
}