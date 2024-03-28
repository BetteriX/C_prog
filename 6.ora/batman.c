#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]){
    if(argc == 1){
        puts("Hello World!\n");
    }
    else if(strcmp(argv[1], "Batman") == 0){
        printf("Denevérveszély!");
        return 1;
    }
    else{
        printf("Hello %s! \n", argv[1]);
    }

    return 0;
}