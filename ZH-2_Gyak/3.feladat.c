#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 1024

typedef struct{
    int id;
    char name[25];
    int age;
}Person;

int file_count(const char* fname){
    FILE *fp = fopen(fname, "r");

    if(fp == NULL){
        printf("Hiba! A fájl nem létezik!\n");
        exit(1);
    }
    
    char sor[SIZE];
    int sum = 0;

    fgets(sor, SIZE, fp);

    while(fgets(sor, SIZE, fp)!= NULL){
        sum++;
    }
    fclose(fp);
        
    return sum;
}

void fill_with_people(const int n, Person people[], const char* fname){
    FILE* fp = fopen(fname, "r");

    char sor[SIZE];
    Person h;
    int index = 0;

    int id;
    char* name;
    int age;

    fgets(sor, SIZE, fp);

    while(fgets(sor, SIZE, fp)!=NULL){
        sor[strlen(sor)-1] = '\0';

        id = atoi(strtok(sor, ";"));
        h.id = id;

        name = strtok(NULL, ";");
        strcpy(h.name, name);

        age = atoi(strtok(NULL, ";"));
        h.age = age;

        people[index] = h;

        index++;
    }
}

int main(int argc, const char* argv[]){
    if(argc != 2){
        printf("Hiba! Adjon meg egy .csv fájlt!\n");
        return 1;
    }

    int count = file_count(argv[1]);

    Person* people = (Person*)malloc(count * sizeof(Person));

    fill_with_people(count, people, argv[1]);

    int max_age = -1;
    char oldest_person[25];
    for (int i = 0; i < count; i++) {
        if (people[i].age > max_age) {
            max_age = people[i].age;
            strcpy(oldest_person, people[i].name);
        }
    }

    printf("Legidősebb személy: %s\n", oldest_person);

    free(people);

    return 0;
}