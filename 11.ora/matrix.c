#include <stdio.h>

typedef char* string;

void kiir(int sorok, int oszlopok, string matrix[sorok][oszlopok]){
   for(int sor = 0; sor < sorok; sor++){
        for(int oszlop = 0; oszlop < oszlopok; oszlop++){
            printf("%d\t", matrix[sor][oszlop]);
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
    int space = 0;
    for(int sor = 0; sor < sorok; sor++){
        for(int oszlop = 5; oszlop > oszlopok; oszlop--){
            if(sor == oszlop){
                printf("%s\n", matrix[sor][oszlop]);
                space++;
            }
        } 
        for(int i = 0; i < space; i++){
            printf(" ");
        }
    }

    printf("\n");
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
        {"aa","bb","cc","dd","ee","ff"}
    };

    //kiir(sorok, oszlopok, matrix);
    foatlo(sorok, oszlopok, matrix);

    return 0;
}