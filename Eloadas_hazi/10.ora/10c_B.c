#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define MIN 10
#define MAX 99
#define INITIAL_CAPACITY 2
#define MULTIPLIER 2

typedef struct{
    int *elems;
    int length;
    int capacity;
} DynArray;

void mem_error_exit(){
    fprintf(stderr, "Error: cannot allocate memory");
    exit(1);
}

int da_sum(const DynArray *self){
    int sum = 0;
    int hossz = self->length;

    for(int i = 0; i < hossz; i++){
        sum += self->elems[i];
    }

    return sum;
}

double da_avarage(const DynArray *self){
    int hossz = self->length;

    return da_sum(self)/hossz;
}

void* da_destroy(DynArray *self){
    free(self->elems);
    free(self);
    
    return NULL;
}

DynArray * da_create(){
    DynArray *result = malloc(sizeof(DynArray));
    if(result == NULL){
        mem_error_exit();
    }

    result->elems = malloc(INITIAL_CAPACITY * sizeof(int));
    if(result->elems == NULL){
        mem_error_exit();
    }
    result->length = 0;
    result->capacity = INITIAL_CAPACITY;

    return result;
}

void da_append(DynArray *self, int data){
    if(self->length == self->capacity){
        int new_capacity = MULTIPLIER * self->capacity;
        self->elems = realloc(self->elems, new_capacity*sizeof(int));

        if(self->elems == NULL){
            mem_error_exit();
        }
        self->capacity = new_capacity;
    }

    self->elems[self->length]=data;
    self->length++;
}

int randint(int also, int felso){
    return rand() % (felso - also + 1);
}

int main(){
    srand(time(NULL));

    FILE *fp = fopen("numbers.txt","w");
    DynArray *li = da_create();

    for(int i = 0; i < 100; i++){
        int random = randint(MIN,MAX);
        fprintf(fp, "%d\n", random);
        da_append(li, random);
    }

    /*
    for(int i = 0; i < li->length; i++){
        printf(" %d", li->elems[i]);
    }
    */

    printf("DynArray átlag: %.2lf\n", da_avarage(li));

    fclose(fp);

    li = da_destroy(li);

    return 0;
}