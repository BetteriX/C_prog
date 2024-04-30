#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

void Sort(int tomb[], int meret){
    for(int i = 0; i < meret; i++){
        for(int j = 0; j < meret-i-1; j++){
            if(tomb[j] > tomb[j+1]){
                int tmp = tomb[j];
                tomb[j] = tomb[j+1];
                tomb[j+1] = tmp;
            }
        }
    }
}

int main(int argc, char* argv[]){
    if(argc == 1){
        printf("Írd be a fájl nevét!\n");
        return 1;
    }
    else if(argc < 2){
        printf("Túl sok az argumentumba lévő szavak!\n");
        return 1;
    }

    FILE *fp = fopen(argv[1],"r");

    if(fp == NULL){
        printf("Hiba: nem tudtam megnyitni a fájlt!\n");
        return 1;
    }

    char sor[MAX];
    int array[MAX];
    
    int hossz = 0;
    while(fgets(sor, MAX, fp)!=NULL){
        sor[strlen(sor)-1] = '\0';
        array[hossz] = atoi(sor);
        hossz++;
    }

    Sort(array, hossz);

    for(int i = 0; i < hossz; i++){
        printf("%d\n", array[i]);
    }

    return 0;
}