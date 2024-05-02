#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){
    char input[] = "valami";
    printf("hossz = %d\n", strlen(input));
    char* valami = "valami";

    /*
    if(strcmp(input, valami)==0){
        printf("egyenlő\n");
    }
    else{
        printf("Nem egyenlő\n");
    }
    */

    /*
    char *p = malloc(strlen(input)+1);
    strcpy(p, valami);
    
    printf("\n%s\n", p);

    free(p);
    */

    /*
    char *p = strfry(input);
    printf("%s", p);
    */

    
    return 0;
}