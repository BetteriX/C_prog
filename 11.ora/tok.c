#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER 1024

int main(int argc, char const *argv[]){
    FILE *fp = fopen("nevek.csv", "r");

    char sor[BUFFER];
    char *p;
    char* nev; 
    int kor;
    char* szak;

    while(fgets(sor,BUFFER, fp)!= NULL){
        sor[strlen(sor)-1] = '\0';
        p = strtok(sor,",");
        nev = p;
        p = strtok(NULL,",");
        kor  = atoi(p);
        p = strtok(NULL,",");
        szak = p;

        if(strcmp(szak, "MI")==0 || strcmp(szak, "mi")==0){
            printf("Név: %s, Kor: %d\n", nev, kor);
        }
    }

    fclose(fp);
    
    return 0;
}