// https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200409e
// 20200409e

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1024

int main(){
    char szam[1024];

    FILE *fp_r = fopen("in.txt", "r");
    FILE *fp_w = fopen("out.txt", "w");

    if(fp_r != NULL){
        printf("# in.txt sikeresen megnyitva\n");
    }
    else{
        printf("Hiba a fajl megnyitasa kozben!\n");
        return 1;
    }

    printf("# 0,5-nél nagyobb számok szűrése...\n");

    int szam_nagyobb = 0;
    while(fgets(szam, MAX, fp_r)!=NULL){
        if(atof(szam) > 0.5){
            szam_nagyobb++;
            szam[strlen(szam)-1] = '\0';
            fprintf(fp_w,"%s\n",szam);
        }
    }

    printf("# szűrés vége\n");

    fclose(fp_r);

    fclose(fp_w);
    printf("# out.txt bezárva\n");

    printf("# out.txt-be kiírt számok mennyisége: %d db\n",szam_nagyobb);

    return 0;
}