#include <stdio.h>
#include <stdlib.h>

#define MIN 10
#define MAX 99


int randint(int also, int felso){
    return rand() % (felso - also + 1);
}

int main(){
    FILE *fp = fopen("numbers.txt","w");

    for(int i = 0; i < 100; i++){
        fprintf(fp, "%d\n", randint(MIN,MAX));
    }

    fclose(fp);

    return 0;
}