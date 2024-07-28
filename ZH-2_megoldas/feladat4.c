#include <stdio.h>
#include <stdlib.h>

#define MIN 6
#define MAX 89

void bubble_sort(int n, int tomb[]){
    for(int i = 0; i < n-1;i++){
        for(int j = i+1; j < n; j++){
            if(tomb[i] > tomb[j]){
                int tmp = tomb[i];
                tomb[i] = tomb[j];
                tomb[j] = tmp;
            }
        }
    }
}

int randint(int also, int felso){
    return also + (rand() % (felso - also + 1));
}

int main(){
    srand(2000);

    int tomb[100];
    for(int i = 0; i < 100;i++){
        tomb[i] = randint(MIN,MAX);
    }

    bubble_sort(100, tomb);

    int n = 100;
    int median = tomb[(n-1)/2]; // Az n+1 helyet n-1 kell
    double also_kvartilis = (double)tomb[(n-1)/4]; // Szintén itt is n-1 kell mert a megfelelő értéket adjam meg ezzel

    printf("medián: %d\n", median);
    printf("első kvartilis: %2.lf\n", also_kvartilis);

    return 0;
}