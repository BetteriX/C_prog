// https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200409d
// 20200409d

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1024
int main(){
    char szam[MAX];

    FILE *fp = fopen("valos_szamok.txt", "r");
    if (fp == NULL) {
        printf("Hiba a fajl megnyitasa kozben!\n");
        return 1;
    }
    
    float sum = 0;
    while(fgets(szam, MAX, fp)!= NULL){
        for (int i = 0; i < strlen(szam); i++) {
            if (szam[i] == ',') {
                szam[i] = '.';
            }
        }
        sum += atof(szam);
    }

    fclose(fp);

    printf("%.20f\n",sum);

    return 0;
}