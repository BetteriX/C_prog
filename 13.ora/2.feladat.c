#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* swapcase(const char* original){
      int hossz = strlen(original);
      char* new_string = (char*)malloc(hossz+1 * sizeof(char));
      strcpy(new_string, original);
      for(int i = 0; i < hossz; i++){
            if(islower(new_string[i])){
                  new_string[i] = toupper(new_string[i]);
            }
            else if(isupper(new_string[i])){
                  new_string[i] = tolower(new_string[i]);
            }
            else{
                  new_string[i] = new_string[i];
            }
      }

      new_string[hossz] = '\0';


      return new_string;
}

int main(int argc, const char* argv[]){
      if(argc != 2){
            printf("Hiba! Adja meg a sztringet!\n");
            return 1;
      }

      char* szoveg = swapcase(argv[1]);
            
      printf("%s\n", szoveg);

      free(szoveg);

      return 0;
}