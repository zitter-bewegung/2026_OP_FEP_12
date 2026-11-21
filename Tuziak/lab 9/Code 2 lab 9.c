#include <stdio.h>
#include <string.h>

int main() {
    int user_num;
    char name[100][50];
    char surname[100][50];

    printf("Enter number of names you wanna enter (min 10): ");
    scanf("%d", &user_num);
    //обробка помилки
    if (user_num < 10) {
      printf("error! minimum 10 names!");
      return 1;
    } 
  //ввід списку
    for (int i = 0; i < user_num; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", name [i]);
        printf("Enter surname %d: ", i + 1);
        scanf("%s", surname[i]);
    }
//вивід списку
    printf("\nYou entered:\n");
    for (int i = 0; i < user_num; i++) {
        printf("%d. %s %s\n", i + 1, name[i], surname[i]);
    }
//різні імена
   int unique = 0;
    for (int i = 0; i < user_num; i++) {
        int seen = 0;                     
        for (int j = 0; j < i; j++) {      
            if (strcmp(name[i], name[j]) == 0) {
                seen = 1;
                break;
            }
        }
        if (!seen) unique++;        
    }
  // середня довжина
   int totallen = 0;
   for (int i = 0; i < user_num; i++) {
     totallen += strlen(surname[i]);
   }

   // сортування за алфавітом
for (int i = 0; i < user_num - 1; i++) {
    for (int j = 0; j < user_num - 1 - i; j++) {
        if (strcmp(surname[j], surname[j + 1]) > 0) {
            char tmp[50];

            strcpy(tmp, surname[j]);
            strcpy(surname[j], surname[j + 1]);
            strcpy(surname[j + 1], tmp);

            strcpy(tmp, name[j]);
            strcpy(name[j], name[j + 1]);
            strcpy(name[j + 1], tmp);
        }
    }
}
  //вивід даних
    printf("\nUnique names: %d\n", unique);
    printf("Average surname length: %2f\n", (double)totallen / user_num);
    printf("\nSorted list:\n");
      for (int i = 0; i < user_num; i++) {
    printf("%d. %s %s\n", i + 1, name[i], surname[i]);
}
    return 0;
}