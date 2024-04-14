// https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Py3.20120818f
// 20120818f

#include <stdio.h>
#include <stdlib.h>

int main(){
    int negyzet_osszege = 0;
    int osszeg_negyzete = 0;

    for(int i = 1; i <= 100; i++){ // Fontos hogy 1-100 ig menjen
        negyzet_osszege += i*i;
        osszeg_negyzete += i;
    }

    osszeg_negyzete *= osszeg_negyzete;

    printf("Eredmény: %d\n", osszeg_negyzete-negyzet_osszege);

    return 0;
}