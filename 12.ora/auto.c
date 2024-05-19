#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// UTF-8 kódolásra kell
#include <windows.h>

typedef struct{
    char marka[25];
    char nev[25];
    char tipus[50];
    char gyartas_eve[10];
} Auto;

void sort_name(int n, Auto* h){
    for(int i = 0; i < n-1;i++){
        for(int j = i+1; j < n; j++){
            // Ha a karakterek nem egyeznek, meg ami ASCII táblázatban lévő értékei kisebbek mint a másiké akkor megcseréli azzokat
            if(strcmp(h[i].marka,h[j].marka)>0){ 
                Auto tmp = h[i];
                h[i] = h[j];
                h[j] = tmp;
            }
        }
    }
}

int feltolt(const char* fname, const int n, Auto autok[]){
    FILE *fp = fopen(fname, "r");

    if(fp == NULL){
        fprintf(stderr, "Hiba a fájl megnyitásánál!\n");
        return 1;
    }

    int index = 0;
    char sor[100];
    char* p;

    char* marka;
    char* nev;
    char* tipus;
    char* gyartas_eve;

    // Az első sort nem olvassa be
    fgets(sor,n,fp);

    while(fgets(sor,n,fp)!=NULL){
        sor[strlen(sor)-1]='\0';
        Auto h;
        
        p = strtok(sor, ",");
        strcpy(h.marka,p);
        p = strtok(NULL, ",");
        strcpy(h.nev,p);
        p = strtok(NULL, ",");
        strcpy(h.tipus,p);
        p = strtok(NULL, ",");
        strcpy(h.gyartas_eve,p);

        autok[index] = h;

        index++;
    }
    fclose(fp);
    return index;
}

/*
Ez uggyan az csak lassabb
void kiir_autok(Auto h){
    printf("%s, %s, %s, %s\n", h.marka, h.nev, h.tipus, h.gyartas_eve);
}
*/
void kiir_autok(Auto* h){
    printf("%s, %s, %s, %s\n", h->marka, h->nev, h->tipus, h->gyartas_eve);
}

int main(){
    // Átkonvertálja a betűket és normálisan írja ki (Windows alatt)
    SetConsoleOutputCP(CP_UTF8);

    Auto autok[100];
    int auto_szam = feltolt("marka.csv", 100, autok);
    sort_name(auto_szam, autok);

    for(int i = 0; i < auto_szam; i++){
        kiir_autok(&autok[i]);
    }

    return 0;
}