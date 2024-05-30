#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define M_MIN 5
#define M_MAX 10

#define MIN 1
#define MAX 100

int negyzetes_e(int x, int y){
    if(x == y){
        return 1;
    }

    return 0;
}

int randint(int also, int felso){
    return also + (rand() % (felso - also + 1));
}

int min_matrix(int x, int y, int matrix[x][y]){
    int min = matrix[0][0];

    for(int i = 0; i < x; i++){
        for(int j = 1; j < y; j++){
            if(min > matrix[i][j]){
                min = matrix[i][j];
            }
        }
    }

    return min;
}

int max_matrix(int x, int y, int matrix[x][y]){
    int max = matrix[0][0];

    for(int i = 0; i < x; i++){
        for(int j = 1; j < y; j++){
            if(max < matrix[i][j]){
                max = matrix[i][j];
            }
        }
    }

    return max;
}

int mellekatlo_matrix(int x, int y, int matrix[x][y]){
    int sum = 1;

    int j = 0;
    for(int i = x; i > 0; i--){
        sum *= matrix[j][i];
        j++;
    }

    return sum;
}

int main(){
    srand(time(NULL));

    int x = 5;
    int y = 5;

    //int x = randint(M_MIN,M_MAX);
    //int y = randint(M_MIN,M_MAX);

    int n = negyzetes_e(x, y);

    printf("A mátrix mérete: %dx%d\n", x, y);

    if(n){
        printf("A mátrix négyzetes.\n");
    }
    else{
        printf("A mátrix nem négyzetes.\n");
    }

    printf("Mátrix:\n");
    int matrix[x][y];
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            matrix[i][j] = randint(MIN,MAX);
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }

    printf("A legkisebb elem: %d\n", min_matrix(x, y, matrix));
    printf("A legnagyobb elem: %d\n", max_matrix(x, y, matrix));

    if(n){
        printf("Mellekátló szorzata: %d\n", mellekatlo_matrix(x, y, matrix));
    }

    return 0;
}