#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void my_strfry(char* szoveg){
    int hossz = strlen(szoveg);
    for(int i = hossz-1; i > 1; i--){
        int j = rand() % (i - 1);

        char tmp = szoveg[i];
        szoveg[i] = szoveg[j];
        szoveg[j] = tmp;
    }
}

int main(){
    srand(time(NULL));
    char szoveg[] = "JANO MELLEG";

    my_strfry(szoveg);

    printf("%s\n",szoveg);

    return 0;
}