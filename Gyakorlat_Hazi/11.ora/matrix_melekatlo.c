#include <stdio.h>

void matrix_atlo(int sorok, int oszlopok, int matrix[sorok][oszlopok]){
    int sor = 0;
    int oszlop = oszlopok-1;
    
    for(int i = 0; i < oszlopok; i++){
        for(int space = 0; space < oszlop; space++){
            printf(" ");
        }
        printf("%d\n", matrix[sor][oszlop]);
        sor++;
        oszlop--;
    }
}

int main(){
    int matrix[6][6] = {
        {1,2,3,4,5,6},
        {1,2,3,4,5,6},
        {1,2,3,4,5,6},
        {1,2,3,4,5,6},
        {1,2,3,4,5,6},
        {1,2,3,4,5,6}
    };
    int sor = 6;
    int oszlop = 6;

    matrix_atlo(sor, oszlop, matrix);

    return 0;
}