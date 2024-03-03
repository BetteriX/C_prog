#include <stdio.h>

int main(){
    // https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200213h
    // Szorgalmi házi PE#1
    int ossz = 0;
    for (int i = 0; i < 1000; i++)
    {
        if(i % 3 == 0 | i % 5 == 0){
            ossz = ossz + i;
        }
    }

    printf("%d\n", ossz);

    return 0;
}