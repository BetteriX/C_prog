// https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Py3.20121125b
// 20121125b

#define BUFFER 1024
#define MAX 100

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void sort_names(int n, char* name[]){
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(strcmp(name[i], name[j])==1){ // 1 Ha nem egyeznek a betük ha pedig igen akkor 0
                char* tmp = name[i];
                name[i] = name[j];
                name[j] = tmp;
            }
        }
    }
}

int main(){
    FILE *fp = fopen("nevek.csv","r");

    char sor[BUFFER];
    char* p;
    char* nev;
    int kor;
    char* szak;
    char* pti_nevek[MAX];
    int pti_count = 0;

    while(fgets(sor, BUFFER, fp)!=NULL){
        sor[strlen(sor)-1]='\0';
        p = strtok(sor, ",");
        nev = p;
        p = strtok(NULL, ",");
        kor = atoi(p);
        p = strtok(NULL, ",");
        szak = p;

        int hossz = strlen(szak);
        for(int i = 0; i < hossz; i++){
            szak[i] = toupper(szak[i]);
        }

        if(strcmp(szak,"PTI")==0){
            nev[0] = toupper(nev[0]);
            pti_nevek[pti_count] = strdup(nev);
            pti_count++;
        }
    } 
    
    fclose(fp);

    sort_names(pti_count, pti_nevek);

        for (int i = 0; i < pti_count; i++) {
        printf("%s", pti_nevek[i]);
        if (i < pti_count - 1) {
            printf(", ");
        }
        free(pti_nevek[i]);
    }
    printf("\n");

    return 0;
}