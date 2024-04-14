// https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200331d
// 202000331d

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[]){
    printf("Szám: ");

    char szamok[1024];
    fgets(szamok, 1024, stdin);
    szamok[strlen(szamok)-1] = '\0';

    int sum = 0;
    for(int i = 0; szamok[i] != '\0'; i++){
        sum += szamok[i] - '0'; // With (- '0') its converts into number    
    }

    printf("\n");

    printf("A számjegyek összege: %d\n",sum);

    return 0;
}