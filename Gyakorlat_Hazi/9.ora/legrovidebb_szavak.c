// https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200409a
// 20200409a

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){
    if(argc == 1){
        fprintf(stderr, "Nem adtál meg egyetlen szót sem!\n");
        return 1;
    }

    int rovid_szo_meret = strlen(argv[1]);

    for(int i = 2; i < argc; i++){
        int meret = strlen(argv[i]);
        if(meret < rovid_szo_meret){
            rovid_szo_meret = meret;
        }
    }

    for(int i = 1; i < argc; i++){
        if(rovid_szo_meret == strlen(argv[i])){
            printf("%s\n",argv[i]);
        }
    }

    return 0;
}