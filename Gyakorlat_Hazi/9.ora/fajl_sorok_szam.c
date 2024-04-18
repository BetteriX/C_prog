// https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200409c
// 20200409c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1024

int get_number_of_lines(FILE *fp){
    char sor[MAX];
    int sor_szam = 0;
    while(fgets(sor, MAX, fp) != NULL){ // az fgets soronként feldolgoza a fájlt
        sor_szam++;
        //sor[strlen(sor)-1] = '\0';
        //printf("%s\n",sor);
    }

    return sor_szam;
}

int main(int argc, char* argv[]){
    if(argc == 1){
        printf("Hiba! Adja meg egy szöveges állomány nevét!\n");
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");

    if(fp == NULL){
        printf("Hiba! A %s nevű file-t nem sikerült megnyitni!\n", argv[1]);
        return 1;
    }

    int sor_szam = get_number_of_lines(fp);

    fclose(fp);

    printf("%d\n",sor_szam);

    return 0;
}