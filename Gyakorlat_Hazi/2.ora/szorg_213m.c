#include <stdio.h>

int main(){
    // https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200213m
    // Szorgalmi házi
    int elem_szam = 0;
    int szam = 0;
    do{
        printf("Egesz szam (vege: 0): ");
        scanf("%d",&szam);
        if(szam > 0){
            elem_szam++;
        }
    } while(szam != 0);

    printf("Pozitiv elemek szama: %d\n", elem_szam);

    return 0;
}