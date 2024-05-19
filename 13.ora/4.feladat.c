#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 256

int main(){
    FILE *fp = fopen("mozik.csv", "r");

    if(fp == NULL){
        printf("Hiba! A fájl betöltésénél!\n");
        return 1;
    }

    char sor[SIZE];
    char* p;

    float ertekeles;
    char* nev;
    int szavazatok = 0;

    int szavazatok_count = 0;

    while(fgets(sor, SIZE, fp)!=NULL){
        sor[strlen(sor)-1] = '\0';
        p = strtok(sor, ";");
        ertekeles = atof(p);
        p = strtok(NULL, ";");
        nev = p;
        p = strtok(NULL, ";");
        szavazatok = atoi(p);

        if(szavazatok >= 500000){
            printf("%s\n", nev);
            szavazatok_count++;
        }
    }

    fclose(fp);

    printf("\nEnnyi szavazat található amirre legalább fél millióan szavaztak: %d\n", szavazatok_count);

    return 0;
}