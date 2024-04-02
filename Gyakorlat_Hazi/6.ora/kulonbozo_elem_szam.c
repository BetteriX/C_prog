// https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200326b
// 20200326b

#include <stdio.h>


int contains(int n, int length, int tomb[]){
    if(length == 0){
        return 0;
    }
 
    for(int i = 0; i < length; i++){
        if(tomb[i] == n){
            return 1;
        }
    }

    return 0;
}

void Sort(int n, int tomb[]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(tomb[j] > tomb[j+1]){
                int tmp = tomb[j];
                tomb[j] = tomb[j+1];
                tomb[j+1] = tmp;
            }
        }
    }
}

int main(){
    printf("Adj meg 0 végjelig egész számokat az [1, 99] intervallumból!\n");
    
    int szam;
    int tomb[99];
    int db = 0;
    do
    {
        printf("Szám: ");
        scanf("%d", &szam);

        if(szam < 0 || szam > 99){
            printf("Ez a szám kívül esik az elfogadható intervallumon!\n");
        }
        else if(szam == 0){
            break;
        }
        else{
            if(contains(szam, db, tomb)==0){
                tomb[db] = szam;
                db++; 
            }
        }
    } while (szam != 0);

    printf("\n");
    
    printf("%d db különböző szám lett megadva.\n", db);

    Sort(db, tomb);

    printf("Ezek (növekvő sorrendben):");
    for(int i = 0; i < db; i++){
        printf(" %d",tomb[i]);

        if(i != db-1){
            printf(",");
        }
    }

    printf("\n");

    return 0;
}