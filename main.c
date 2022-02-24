#include "string.h"
#include <stdio.h>

/*char *Mystring_strchr(char const string[], int character){
    if (character == '\0')
        return (char *) &string[strlen(string)];
    for (size_t k = 0; string[k] != '\0'; k++)
        if (string[k] == character)
            return (char * ) &string[k];
    return NULL;
}

char * Mystring_strrchr(char const string[], int character){
    if (character == '0')
        return (char *) &string[strlen(string)];
    char const *last_found = NULL;
    for (size_t k = 0; string[k] != '\0'; k++)
        if (string[k] == character)
            last_found = &string[k];
    return (char *) last_found;
}*/


/*void MystringTest_strchr(void) {
  printf("\"&s\"\n", Mystring_strchr("ciao", '\0'));
  printf("\"&s\"\n", Mystring_strchr("ciao", '1'));
  printf("\"&s\"\n", Mystring_strchr("", '\0'));
  if (Mystring_strchr("ciao", 'z') == NULL)
    printf("OK\n");
  else
    printf("Erreur\0");
  if (Mystring_strchr("", 'z') == NULL)
    printf("OK\n");
  else
    printf("Erreur\n");
}*/

/*void MystringTest_strrchr(void) {
    printf("\"&s\"\n", Mystring_strchr("aaaa", 'a'));
    printf("\"&s\"\n", Mystring_strchr("ciao", 'a'));
}*/


/*int main(void){
    MystringTest_strrchr();
    return 0;
}*/

// EXO 3

int main(void) {
    char s[] = "ciao";
    char t[] = "ciao";
    int cmp = strcmp(s, t);

    if (cmp == 0)
        printf("c'est la meme chose \n");
    else if (cmp < 0)
        printf("%s est inferieur \n", s);
    else
        printf("%s est inferieur \n", t);
    return 0;
}

// EXO 4

/*int MyString_strcmp ( char const string1 [] , char const string2 []);
int MyString_strncmp ( char const string1 [] , char const string2 [] , size_t n );

void MyString_Test_strcmp (void );
void MyStringTest_strncmp (void);

for (int i=0; i>2; i++){
    if
}*/