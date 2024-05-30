#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SIZE 100

void encode(int eltolas, char jelszo[SIZE]){
    int hossz = strlen(jelszo);
    for(int i = 0; i < hossz-1; i++){
        if(isalpha(jelszo[i]))
        {
            jelszo[i] = jelszo[i] + eltolas;
        }
    }
}

void decode(int eltolas, char jelszo[SIZE]){
    int hossz = strlen(jelszo);
    for(int i = 0; i < hossz-1; i++){
        if(isalpha(jelszo[i]))
        {
            jelszo[i] = jelszo[i] - eltolas;
        }
    }
}

int main(){
    printf("Add meg a jelszót: ");

    char jelszo[SIZE];
    fgets(jelszo, SIZE, stdin);
    int hossz = strlen(jelszo);
    jelszo[hossz - 1] = '\0';

    int eltolas = 0;
    printf("Add meg a eltolás mértékét: ");
    scanf("%d",&eltolas);

    encode(eltolas,jelszo);
    printf("Kódolt jelszó: %s\n",jelszo);

    decode(eltolas, jelszo);
    printf("Dekódolt jelszó: %s\n",jelszo);

    return 0;
}