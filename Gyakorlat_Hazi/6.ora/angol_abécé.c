// https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200321a
// 20200321a (B verzió)

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#define SIZE 26

char abece[SIZE+1];

string feltolt_sztring() {
    //for (int i = 0, betu = 'a'; i < 26 && betu <= 'z'; i++, betu++){
    for(int i = 0; i < SIZE; i++){
        abece[i] = 'a' + i;
    }
    abece[SIZE] = '\0';
    return abece;
}


int main(){
    string abc = feltolt_sztring();

    printf("%s\n", abc);

    return 0;
}