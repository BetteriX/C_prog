#include <stdio.h>
#include <string.h>
#include "prog1.h"
#define SIZE 100

int main(int argc, char const *argv[]){
    /*
    char text[SIZE];
    printf("Írj be egy szöveget: ");
    fgets(text, SIZE, stdin); // \name
    text[strlen(text) - 1] = '\0';
    printf("Szöveg: %s\n", text);
    */

    string s = "20";
    int x  = atoi(s) + 5;
    printf("%d\n", x + 5);

    string pi = "3.14159";
    double d = atof(pi);
    printf("%lf\n", d);

    
    return 0;
}