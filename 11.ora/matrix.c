#include <stdio.h>

typedef char* string;

void kiir(int sorok, int oszlopok, string matrix[sorok][oszlopok]){
   for(int sor = 0; sor < sorok; sor++){
        for(int oszlop = 0; oszlop < oszlopok; oszlop++){
            printf("%s\t", matrix[sor][oszlop]);
        }
        printf("\n");   
    } 
}

int osszead(int sorok, int oszlopok, int matrix[sorok][oszlopok]){
    int sum = 0;
    for(int sor = 0; sor < sorok; sor++){
        for(int oszlop = 0; oszlop < oszlopok; oszlop++){
            sum += matrix[sor][oszlop];
        } 
    } 

    return sum;
}

void foatlo(int sorok, int oszlopok, string matrix[sorok][oszlopok]){
    int sor = 0;
    int oszlop = oszlopok;

    int tab = 1;
    while(sor != sorok && oszlop != 0){
        printf("%s\n", matrix[sor][oszlop]);

        for(int i = 0; i < tab; i++){
            printf("\t");
        }
        tab++;

        sor++;
        oszlop--;
    }
}

int main(int argc, char const *argv[]){
    /*
    int matrix[6][6] = {
        {1,2,3,4,5,6},
        {1,2,3,4,5,6},
        {1,2,3,4,5,6},
        {1,2,3,4,5,6},
        {1,2,3,4,5,6},
        {1,2,3,4,5,6}
    };
    */
    int sorok = 6; int oszlopok = 6;

    string matrix[6][6] = {
        {"aa","bb","cc","dd","ee","ff"},
        {"aa","bb","cc","dd","ee","ff"},
        {"aa","bb","cc","dd","ee","ff"},
        {"aa","bb","cc","dd","ee","ff"},
        {"aa","bb","cc","dd","ee","ff"},
        {"aa","bb","cc","dd","ee","ff"}
    };

    kiir(sorok, oszlopok, matrix);
    foatlo(sorok, oszlopok, matrix);

    return 0;
}