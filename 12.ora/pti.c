#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 1024

void capitalize(char text[]){
    int hossz = strlen(text);

    if(hossz > 0){
        text[0] = toupper(text[0]);
        for(int i = 1; i < hossz; i++){
            text[i] = tolower(text[i]);
        }
    }
}

void lowercase(char text[]){
    int hossz = strlen(text);

    if(hossz > 0){
        for(int i = 0; i < hossz; i++){
            text[i] = tolower(text[i]);
        }
    }
}

typedef struct{
    char nev[50];
    int kor;
    char szak[5];
} Hallgato;


int feltolt(const char* fname, const int n, Hallgato tomb[]){
    FILE *fp = fopen(fname, "r");

    if(fp == NULL){
        fprintf(stderr,"Hiba a fájl megnyitásakor!\n");
        return 1;
    }

    int index = 0;

    char sor[n];
    char* p;

    char* nev;
    int kor;
    char* szak;
    while(fgets(sor, n, fp)!=NULL){
        sor[strlen(sor)-1]='\0';
        p = strtok(sor,",");
        nev = p;
        p = strtok(NULL,",");
        kor = atoi(p);
        p = strtok(NULL,",");
        szak = p;

        Hallgato h;
        strcpy(h.nev, nev);
        h.kor = kor;
        strcpy(h.szak,szak);

        tomb[index] = h;

        index++;
    }
    fclose(fp);

    return index;
}

void kiir_hallgato(Hallgato *h){
    printf("%s, %d, %s\n", h->nev, h->kor, h->szak);
}

int kiszur_ptisek(const int n, Hallgato tomb[], Hallgato ptisek[]){
    int index = 0;
    for(int i = 0; i < n; i++){
        // tomb-e eltároljuk a hallgatok informéciót majd azt irasuk be a ptisekbe ha jó
        Hallgato h = tomb[i];
        lowercase(h.szak);

        if(strcmp(h.szak, "pti") == 0){
            ptisek[index] = tomb[i];
            index++;
        }
    }

    return index;
}


int main(){
    Hallgato hallgatok[100];
    int ertekek = feltolt("nevek.csv", 100, hallgatok);

    for(int i = 0; i < ertekek; i++){
        kiir_hallgato(&hallgatok[i]);
    }

    printf("-------------------------------------\n");

    Hallgato ptisek[100];
    int ptisek_szam = kiszur_ptisek(100, hallgatok, ptisek);
    for(int i = 0; i < ptisek_szam; i++){
        kiir_hallgato(&ptisek[i]);
    }
    /*
    FILE *fp = fopen("nevek.csv", "r");
    char sor[MAX];
    char* p;
    char* nev;
    int kor;
    char* szak;

    while(fgets(sor, MAX, fp)!=NULL){
        sor[strlen(sor)-1]='\0';
        p = strtok(sor,",");
        nev = p;
        p = strtok(NULL, ",");
        kor = atoi(p);
        p = strtok(NULL,",");
        szak = p;

        capitalize(nev);

        printf("%s\n",nev);
    }
    fclose(fp);
    */
    return 0;
}