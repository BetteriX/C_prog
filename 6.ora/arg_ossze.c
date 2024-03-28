#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){
    /*
    int x = atoi(argv[1]) + atoi(argv[2]); // atoi (char-t átalakítja int-é)
    printf("%d\n", x);
    */

    if(argc == 1){
        printf("Adj meg egy parancssori argumentumot!\n");
        return 1;
    }

    if(argc == 2){
        printf("Adj meg egy számot is!\n");
        return 2;
    }

    printf("Hello %s\n", argv[1]);

    int szam = atoi(argv[2]);
    for(int i = 3; i < argc; i++){
        szam -= atoi(argv[i]);
    }

    printf("Szám: %d\n", szam);

    return 0;
}