#include <stdio.h>
#include <stdlib.h>

#define MIN 14
#define MAX 65

typedef struct{
    int foatlo_sum;
    int mellekatlo_multip;
    double elemek_atlag;
} Statistics;

int randint(int also, int felso){
    return also + (rand() % (felso - also + 1));
}

Statistics gather(const int n, const int matrix[][n]){
    Statistics h;
    for(int i = 0; i < n; i++){
        h.foatlo_sum += matrix[i][i];
    }

    int sor = n;
    h.mellekatlo_multip = 1;
    for(int i = 0; i < n; i++){
        h.mellekatlo_multip = h.mellekatlo_multip * matrix[sor][i];
        sor--;
    }

    double sum = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            sum += matrix[i][j];
            count++;
        }
    }

    h.elemek_atlag = sum / count;

    printf("Foatlo elemeinek osszege: %d\n", h.foatlo_sum);
    printf("Mellekatlo elemeinek szorazata: %d\n", h.mellekatlo_multip);
    printf("Elemek atlaga: %.2lf\n",h.elemek_atlag);
}

int main(){
    srand(1980);
    int n = 5;
    int matrix[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matrix[i][j] = randint(MIN,MAX);
        }
    }

    gather(n, matrix);

    return 0;
}