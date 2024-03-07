#include <stdio.h>

int main(){
    // https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200213g 
    // Házi
    int ossz = 0;

    for(int i = 1; i <= 100; i++){
        ossz = ossz + i;
    }

    printf("%d\n",ossz);

    return 0;
}