#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[100];
    char type[25];
    int calories;
}Food;

int file_count(const char* fname){
    FILE *fp = fopen(fname, "r");

    if(fp == NULL){
        printf("Hiba! A fájl nem létezik!\n");
        return 1;
    }

    char sor[200];
    int count = 0;

    while(fgets(sor, 200, fp)!=NULL){
        count++;
    }
    fclose(fp);

    return count;
}

void fill_with_food(const int n, Food foods[]){
    FILE *fp = fopen("foods.csv", "r");

    char sor[200];
    char *p;
    int index;
    while(fgets(sor, 200, fp)!=NULL){
        sor[strlen(sor)-1] = '\0';

        Food h;

        p = strtok(sor, ";");
        strcpy(h.name, p);

        p = strtok(NULL, ";");
        strcpy(h.type, p);

        p = strtok(NULL, ";");
        h.calories = atoi(p);

        foods[index] = h;
        index++;
    }
    fclose(fp);
}

int main(int argc, const char* argv[]){
    if(argc == 1){
        printf("Hiba! Adjon meg egy .csv fájlt!\n");
        return 1;
    }

    int hossz = file_count(argv[1]);

    Food foods[500];

    fill_with_food(hossz, foods);

    return 0;
}