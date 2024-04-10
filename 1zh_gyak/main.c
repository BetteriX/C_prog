#include <stdio.h>
#include <math.h>
#include <string.h>
#include "prog1.h"

#define SIZE 128

int valid_triangle(int a, int b, int c){
    if((a + b) > c && (a + c) > b && (b + c) > a){
        return 1;
    }

    return 0;
}

void nagy_koru(){
    int n = 0;
    printf("Korod: ");
    scanf("%d",&n);

    if(n < 18){
        printf("Kiskorú vagy!\n");
    }
    else{
        printf("Nagykorú vagy!\n");
    }
}

void BMI(){
    double suly;
    printf("Testsulyod: ");
    scanf("%d", &suly);

    double meret;
    printf("Magasságod: ");
    scanf("%d", &meret);
    double negyzetmeter = meret/100;

    double index = suly/negyzetmeter;
    printf("testsulyindexed: %1.f\n", index);
}

void karakter(){
    char karakter;
    scanf("%c%*c", &karakter);

    char karakter2;
    scanf("%c%*c", &karakter2);

    if(karakter == karakter2){
        printf("A karakter uggyan az!\n");
    }
    else{
        printf("A karakter nem uggyan az!\n");
    }
}

void negyzet_kirajzol(){
    int n = 0;
    printf("Addj meg egy pozitív egész számot: ");
    scanf("%d", &n);

    //felso resz
    for(int i = 0; i < n; i++){
        printf("*");
    }

    printf("\n");

    for(int i = 0; i < n-2; i++){
        for(int j = 0; j < n; j++){
            if(j == 0 || j == n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }

        printf("\n");
    }

    //also resz
    for(int i = 0; i < n; i++){
        printf("*");
    }

    printf("\n");
}

void osszefuz(char dest[], char str1[], char str2[]){
    int str1_length = strlen(str1);
    int str2_length = strlen(str1);

    for(int i = 0; i < str1_length; i++){
        dest[i] += str1[i];
    }

    for(int i = 0; i < str2_length; i++){
        dest[i+str1_length] += str2[i];
    }
}

int main(int argc, char const *argv[]){
    //printf("%d\n", valid_triangle(1,2,3));

    /*
    // osszefuz
    char str1[64] = "Hello";
    char str2[64] = "World";
    char osszefuzott[128] = {0};

    osszefuz(osszefuzott, str1, str2);
    printf("%s + %s = %s\n", str1, str2, osszefuzott);
    */

    // argumentum: 1
    printf("Írj be szavakat: \n");

    if(argc == 1){
        printf("Írj be egy argumentumot!\n");
        return 1;
    }

    char text[128];

    do
    {
        printf(": ");
        fgets(text, SIZE, stdin);
        text[strlen(text) - 1] = '\0';
    } while ((strcmp(text, argv[1])) != 0);
    
    printf("Vége!\n");

    return 0;
}