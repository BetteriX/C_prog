#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SIZE 100

int eros_jelszo_e(char* password){
    int hossz = strlen(password);
    if(hossz <= 8){
        return 0;
    }

    int nagy = 0;
    int szam = 0;
    for(int i = 0; i < hossz; i++){
        if(nagy != 1){
            if(isupper(password[i])){
                nagy++;
            }
        }

        if(szam != 1){
            if(isdigit(password[i])){
                szam++;
            }
        }

        if(nagy == 1 && szam == 1){
            return 1;
        }
    }

    return 0;
}

int main(){
    FILE *fp = fopen("jelszavak.txt","r");

    if(fp == NULL){
        printf("Hiba! A fájl megnyitásánál!\n");
        return 1;
    }

    char sor[SIZE];
    FILE *fw = fopen("eros.txt","w");

    while(fgets(sor, SIZE, fp)!=NULL){
        int hossz = strlen(sor);
        sor[hossz-1] = '\0';

        char dekodolt[SIZE];

        int szam = 0;
        int szamok[4] = {5, 12, -6, -2};
        for(int i = 0; i < hossz-1; i++){
            szam = i % 4;
            dekodolt[i] = sor[i]-szamok[szam];
        }

        szam = 0;
        if(eros_jelszo_e(dekodolt)){
            fprintf(fw,"%s\n",dekodolt);
        }
    }

    fclose(fp);
    fclose(fw);

    return 0;
}