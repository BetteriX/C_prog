#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prog1.h"

int main(int argc, char *argv[]){
    if(argc != 3){
        printf("Hiba! Pontosan 2 paramétert adjon meg!\n");
        return 1;
    }

    int szam = atoi(argv[2]);
    if(szam < 65 || szam > 90 && szam < 97 || szam > 122){
        printf("Hiba! A megadott szám nem a 65-90 vagy a 97-122 közé esik!\n");
        return 1;
    }

    string szoveg = argv[1];

    for(int i = 0; i < strlen(szoveg); i++){
        if((char)szam != szoveg[i]){
            printf("%d",szoveg[i]);
        }
        else{
            printf("%c",szoveg[i]);
        }
    }

    printf("\n");
    
    return 0;
}