#include <stdio.h>

int main(void){

    char text[100];
    int number_of_vowels = 0;
    int number_of_consonants = 0;
    
    printf("Введіть речення англійською: ");
    fgets(text, sizeof(text), stdin);

    for(int i = 0; text[i] != '\0'; i++){

        switch(text[i]){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
            number_of_vowels++;
            break;
            default:
            if ( (text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z') ){
            number_of_consonants++;
            break;
            }
            
        }
/*
        if (text[i] == 'a' || text[i] == 'A'){
            number_of_a++;
        }
        else if (text[i] == 'e' || text[i] == 'E'){
            number_of_e++;
        }
        else if (text[i] == 'i' || text[i] == 'I'){
            number_of_i++;
        }
        else if (text[i] == 'o' || text[i] == 'O'){
            number_of_o++;
        }
        else if (text[i] == 'u' || text[i] == 'U'){
            number_of_u++;
        }
*/
    }
    printf("К-сть голосних: %d\n", number_of_vowels);
    printf("К-сть приголосних: %d\n", number_of_consonants);
/*
    printf("К-сть a: %d\n", number_of_a);
    printf("К-сть e: %d\n", number_of_e);
    printf("К-сть i: %d\n", number_of_i);
    printf("К-сть o: %d\n", number_of_o);
    printf("К-сть u: %d\n", number_of_u);
*/
    return 0;
}