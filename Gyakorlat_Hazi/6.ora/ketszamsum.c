// https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200321c
// 20200321c

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]){
    if(argc != 3){
        printf("Hiba! Két paramétert (számot) kell megadni.\n");
        return 1;
    }

    int sum = atoi(argv[1]) + atoi(argv[2]);
    printf("%d\n", sum);

    return 0;
}