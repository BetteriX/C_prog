// https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Py3.20120815k
// 20120815k

#include <stdio.h>

int main(){
    int cellak[600] = {0}; // 0 érték lesz mindehol mert bezárjuk az összes ajtót
    for(int i = 1; i <= 600; i++){
        for(int j = 1; j <= 600; j++){
            if(j % i == 0){
                cellak[j-1] = !cellak[j-1]; // Negálja az értéket
            }
        }
    }   

    // A cellak-ba 1 lesz ha nyitva van és 0 ha zárva
    for(int i = 0; i < 600; i++){
        if(cellak[i] == 1){ 
            printf("%d", i+1);
        }
    }

    printf("\n");

    return 0;
}