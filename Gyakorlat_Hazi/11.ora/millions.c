#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


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

double da_sum(const DynArray *self){
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

void quicksort(DynArray *self, int bal, int jobb)
{
    int x, temp;
    int i, j;

    i = bal;
    j = jobb;
    x = self->elems[(bal + jobb) / 2];
    while (i <= j)
    {
        while (self->elems[i] < x) ++i;
        while (self->elems[j] > x) --j;
        if (i <= j)
        {
            temp = self->elems[i];
            self->elems[i] = self->elems[j];
            self->elems[j] = temp;
            /* */ // Ezzel lasabb lesz
            // Debug
            //printf("i : %d\t j: %d\n",i,j);
            ++i;
            --j;
        }
    }

    if (bal < j)  quicksort(self, bal, j);
    if (i < jobb) quicksort(self, i, jobb);
}

void* da_clear(DynArray *self){
    for (int i = 0; i < self->length; i++) {
        free(&(self->elems[i]));
    }
    self->length = 0;

}

int main(){
    srand(time(NULL));

    FILE *fp = fopen("millions.txt","r");

    DynArray* list = da_create();

    char* sor = NULL;
    size_t size = 0;
    while(getline(&sor,&size, fp)!=-1){
        sor[strlen(sor)-1]='\0';
        da_append(list,atoi(sor));
    }

    fclose(fp);

    quicksort(list, 0, list->length);

    FILE *fout;
    fout=fopen("millions_out.txt","w");
    for(int i=0;i< list->length;i++){
        fprintf(fout,"%d\n",list->elems[i]);
    }

    free(sor);   

    da_clear(list);
    list = da_destroy(list);
    fclose(fout);

    return 0;
}