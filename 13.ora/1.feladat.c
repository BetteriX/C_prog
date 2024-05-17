#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SIZE 1000000

int password(char password[]){
      int hossz = strlen(password);

      int kis_betu = 0;
      int nagy_betu = 0;
      int szamjegy = 0;
      int spec_karakter = 0;

      for(int i = 0; i < hossz; i++){
            if(kis_betu != 1){
                  if(islower(password[i])){
                        kis_betu++;
                  }
            }

            if(nagy_betu != 1){
                  if(isupper(password[i])){
                        nagy_betu++;
                  }
            }

            if(szamjegy != 2){
                  if(isalnum(password[i])){
                        szamjegy++;
                  }
            }
            if(spec_karakter != 1){
                  if(password[i] == '.' || password[i] == ',' || password[i] == ':' || password[i] == ';'){
                        spec_karakter++;
                  }
            }

            if(kis_betu == 1 && nagy_betu == 1 && szamjegy == 2 && spec_karakter == 1){
                  return 1;
            }
      }

      return 0;
}

int main(){
      FILE *fp = fopen("passwords.txt", "r");

      if(fp == NULL){
            printf("Hiba a fájl megnyitásakor!\n");
            return 1;
      }

      char jelszo[SIZE];
      int strong_password_sum = 0;
      while(fgets(jelszo, SIZE,fp)!=NULL){
            jelszo[strlen(jelszo)-1] = '\0';
            
            if(password(jelszo)==1){
                  strong_password_sum++;
            }
      }
      fclose(fp);

      printf("Erős jelszavak száma: %d\n", strong_password_sum);

      return 0;
}