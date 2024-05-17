#include <stdio.h>
#include <stdlib.h>

#define MIN 10
#define MAX 99

int randint(int also, int felso){
      return also + (rand() % (felso - also + 1));
}

int matrix_min(int felso, int also,int matrix[felso][also]){
      int min = MAX;
      for(int i = 0; i < felso; i++){
            for(int j = 0; j < also; j++){
                  if(min > matrix[i][j]){
                        min = matrix[i][j];
                  }
            }
      }

      return min;
}

int matrix_max(int felso, int also,int matrix[felso][also]){
      int max = MIN;
      for(int i = 0; i < felso; i++){
            for(int j = 0; j < also; j++){
                  if(max < matrix[i][j]){
                        max = matrix[i][j];
                  }
            }
      }

      return max;
}

int main(){
      srand(1980);

      int felso = 5;
      int also = 5;

      int matrix[felso][also];

      for(int i = 0; i < felso; i++){
            for(int j = 0; j < also; j++){
                  matrix[i][j] = randint(MIN,MAX);
                  printf("%d ", matrix[i][j]);
            }
            printf("\n");
      }
      printf("\n");

      printf("Legkisebb eleme: %d\n", matrix_min(felso, also, matrix));

      printf("Legnagyobb eleme: %d", matrix_max(felso, also, matrix));

      return 0;
}